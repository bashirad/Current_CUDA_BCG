/*
Copyright (c) Ron Coleman
Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/*

Play1024_10000
run this and paste results here
*/
#include <stdio.h>
#include "Strategy.h"
#include "Game.h"
#include "Kpax.h"
#include "Helpers.h"
#include "Glue_Code.h"
#include "GA.h"
#include "Population.h"
#include "time.h"

#define NUM_BLOCKS 32
#define NUM_THREADS_PER_BLOCK 32
#define NUM_THREADS_TOTAL (NUM_BLOCKS * NUM_THREADS_PER_BLOCK)
#define NUM_STRATEGIES NUM_THREADS_TOTAL
#define NUM_GAMES 100000
#define MAX_SAME_COUNT 100
//#define MAX_GENERATION_COUNT 1000
#define MAX_GENERATION_COUNT 1


void engine(void) {

    // Declarations and initializations 
    Strategy strategies[NUM_STRATEGIES];
    for (int index = 0; index < NUM_STRATEGIES; index++) {
        strategies[index] = randomizeStrategy(Strategy_());
    }

    Population oldPopulation;
    Population newPopulation;

    Game statistics[NUM_STRATEGIES];

    int status = -1; 
    Strategy bestElite = Strategy_();
    bestElite.pl = -999;
    int count = 0;
    double meanPl = -1;
    // Timer for tests
    time_t start_intel_seconds;
    time_t end_intel_seconds;
    time_t time_spent_intel;
    
    time_t start_GPU_seconds;
    time_t end_GPU_seconds;
    time_t time_spent_GPU;


    start_intel_seconds = time(NULL);

    printf("+--------------+---------------+------------------+\n");
    printf("|   Generation |   meanP&L     |  MAX_SAME_COUNT  |\n");
    printf("+--------------+---------------+------------------+\n"); 

    for (int generation = 0; generation < MAX_GENERATION_COUNT; generation++) {

        for (int index = 0; index < NUM_STRATEGIES; index++) {
            statistics[index] = Game_();
        }

        start_GPU_seconds = time(NULL);

        int status = evaluate(NUM_BLOCKS, NUM_STRATEGIES, strategies, NUM_GAMES, statistics, generation);

        end_GPU_seconds = time(NULL);

        time_spent_GPU = end_GPU_seconds - start_GPU_seconds;

        printf("time spent on GPU for one generation is %d seconds \n\n", time_spent_GPU);

        // report at the end of each cycle
        if (status != 0) 
            fprintf(stderr, "evaluate returned code = %d \n\n", status);

        // loop to copy pl from statistics to strategies 
        for (int individualIndex = 0; individualIndex < POPULATION_SIZE; individualIndex++) {
            strategies[individualIndex].pl = getReturn(&statistics[individualIndex]);
        }

        meanPl = getMean(NUM_STRATEGIES, strategies);
        printf("|%14d|%15.6f|%18d|\n", generation, meanPl, count);

        popularize(&oldPopulation, strategies);
        int fittestIndex = oldPopulation.fittest;
        Strategy elite = oldPopulation.individuals[fittestIndex];

        if (elite.pl > bestElite.pl) {
            count = 0;
            bestElite = elite;
        }
        else
            count++;

        // Convergence criteria:
        // elitist's pl does not continually drop after 10 cycles and the elite
        if (count >= MAX_SAME_COUNT)
            break;

        // We know what the fittest is at this point
        newPopulation = evolve(&oldPopulation);     
        strategize(&newPopulation, strategies);
    }

    printf("+--------------+---------------+------------------+\n");

    // how did the loop end : did it coverge or reach max number of generations?
    if (count < MAX_SAME_COUNT) {
        printf("Ran out of the %d generations!\n\n", MAX_GENERATION_COUNT);
    }
    else {
        printf("Converged: Elitist's P&L did NOT change for %d generations!\n\n", MAX_SAME_COUNT);
    }

    // sort the strategies using the P&L
    mergeSort(strategies, 0, 1024 - 1);

    // Current generation's worst Strategy
    printf("Current generation's Worst Strategy \n\n");
    printStrategy(&strategies[1023]);

    // Current generation's median Strategy
    printf("Current generation's Median Strategy \n\n");
    printStrategy(&strategies[512]);

    // Current generation's best Strategy 
    printf("Current generation's Best Strategy \n\n");
    printStrategy(&strategies[0]);

    // Global Elite: bestElite
    printf("Global Elite: bestElite \n\n");
    printStrategy(&bestElite);

    //Composite and its P& L is the meanPL
    Strategy composite = Strategy_();
    composite = combineStrategies(strategies, NUM_STRATEGIES);
    composite.pl = meanPl;

    printf("Current generation's Composite Strategy \n\n");
    printStrategy(&composite);

    end_intel_seconds = time(NULL);

    time_spent_intel = (end_intel_seconds - start_intel_seconds) - time_spent_GPU;


    printf("time spent on Intel for one generation is %d seconds \n\n", time_spent_intel);
}
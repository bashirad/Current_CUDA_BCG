#pragma once
//#include "cuda_runtime.h"
//#include "device_launch_parameters.h"
#include "Strategy.h"
#include "Game.h"

#ifndef OK
#define OK 0
#endif

void report(Strategy* strategies, Game* statistics, int numCores);
cudaError_t check(cudaError_t status, const char msg[]);

/*!
  \brief Returns uniform integer random deviate in range, inclusive.
  \param min Minimum number in range, inclusive
  \param max Maximum number in range, inclusive
  \return Integer in range
*/
int random(int min, int max);

/*!
  \brief Returns uniform floating point random deviate in range [0, 1), that is, exclusive of 1.
  \return Floating point number.
*/
float random();

/*!
  \brief Prints the contents of a Strategy object.
  \param strategy Pointer to the Strategy object to be printed.
*/
void printStrategy(Strategy* strategy);

/*!
  \brief Compares the rules of two Strategy objects and returns whether they are equal.
  \param strategy1 Pointer to the first Strategy object.
  \param strategy2 Pointer to the second Strategy object.
  \return 1 if the rules are equal, 0 otherwise.
*/
int countStrategyDiffs(Strategy* strategy1, Strategy* strategy2);

bool isIdentical(Strategy* strategy1, Strategy* strategy2);

/*!
  \brief Verifies if the child strategy contains a mixture of rules inherited from both parents.
  \param parent1 Pointer to the first parent Strategy object.
  \param parent2 Pointer to the second parent Strategy object.
  \param child Pointer to the child Strategy object to be verified.
  \return true if the child strategy contains a mixture of rules, false otherwise.
*/
bool verifyMixtureOfRules(Strategy* parent1, Strategy* parent2, Strategy* child);
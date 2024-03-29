/*
Copyright (c) Ron Coleman and Bashir Dahir
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
#include <time.h>
#include <stdio.h>
#include "Strategy.h"

#include "Helpers.h"

#define NUM_THREADS_PER_BLOCK 5
#define NUM_THREADS_TOTAL (NUM_THREADS_PER_BLOCK * 1)
#define NUM_STRATEGIES NUM_THREADS_TOTAL
#define NUM_GAMES 1000

#include "GA.h"
#include "../Helpers/Strategy1.cpp"

/*!
 \ 3. Test basic strategy vs. strategy 1 has one change.
 \    Use the cross function to generate multiple child strategies.
 \    Check the percent of child strategies that are identical to strategy1.
 \    Verify child will be same as Strategy1 50%.
*/

void cross1(void) {

	Strategy strategy1 = Strategy1_();
	Strategy strategy2 = BasicStrategy_();

	srand(time(NULL));

	Strategy child;

	int count = 0;

	for (int i = 0; i < 100; i++) {

		child = cross(&strategy1, &strategy2);

		if (isIdentical(&strategy1, &child)) count++;
	}

	if (count >= 45 && count <= 55) {
		printf("cross1\n");
		printf("TEST PASSED!\n");
	}
	else {
		printf("cross1\n");
		printf("TEST FAILED!\n");
	}

}
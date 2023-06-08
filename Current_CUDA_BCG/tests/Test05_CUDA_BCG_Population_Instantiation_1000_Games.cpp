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

#include <stdio.h>
#include "Strategy.h"
#include "Game.h"
#include "Kpax.h"
#include "Helpers.h"

#define NUM_THREADS_PER_BLOCK 5
#define NUM_THREADS_TOTAL (NUM_THREADS_PER_BLOCK * 1)
#define NUM_STRATEGIES NUM_THREADS_TOTAL
#define NUM_GAMES 1000

#include "GA.h"

/*!
	\brief Tests the instantiation of two populations.
	The two lines below causes the function to crash with a stack overflow.
	To fix it do: Right-click on Gattaca (the project) > Properties > Configuration Properties > Linker > System > Stack Reserve Size
	and set this number to 2000000.� This figure works but it likely various by platform, depending on hardware.�
	How big is Strategy? See https://www.embedded.fm/blog/2016/6/28/how-big-is-an-enum. 
*/
void Test06_CUDA_BCG_GA_Cross(void) {

	Strategy strategy1 = BasicStrategy_();
	Strategy strategy2 = BasicStrategy_();

	Strategy child = cross(&strategy1, &strategy2);

	if (strategy1.rules == strategy2.rules && strategy2.rules == child.rules) {
		bool test = true;
		printf("TEST PASSED! for GA cross() function % d\n", test);
	}
}
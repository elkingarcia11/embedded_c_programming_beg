/*
 * main.c
 *
 *  Created on: Jan 15, 2020
 *      Author: elkingarcia
 */


#include <stdio.h>

int main(void) {
	/* Definition and initialization
	Here we devide an int by an int so we get an int, then convert it to a float, we lose data
	float result  = 80 / 3;

	So if we explicitly type cast one of the ints, the compiler implicitly typecasts the other int to a float
	and we get float/float which is a float
	*/

	float result  = (float) 80 / 3;
	printf("Result is : %f\n", result);
	return 0;
	}

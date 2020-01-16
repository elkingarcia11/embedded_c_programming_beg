/*
 * main.c
 *
 *  Created on: Jan 15, 2020
 *      Author: elkingarcia
 */

#include <stdio.h>
#include "math.h"

int main() {
	printf("Add: %d\n",math_add(0x0FF11111,0x0FF11111));

	printf("Sub: %d\n",math_sub(0x0FF11111,0x0FF11111));

	printf("Mul:%lld\n",math_mul(0x0FF11111,0x0FF11111));

	printf("Div: %f\n",math_div(0x0FF11111,0x0FF11111));
}

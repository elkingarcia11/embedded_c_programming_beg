/*
 * main.c
 *
 *  Created on: Jan 15, 2020
 *      Author: elkingarcia
 */
#include <stdio.h>

int main() {
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float average = 0;

	printf("Enter 1st numbers: ");
	scanf("%f",&num1);

	printf("\nEnter 2nd numbers: ");
	scanf("%f",&num2);

	printf("\nEnter 3rd numbers: ");
	scanf("%f",&num3);

	printf("\nYou entered: %f %f %f",num1,num2,num3);
	getchar();
	getchar();
	return 0;
}

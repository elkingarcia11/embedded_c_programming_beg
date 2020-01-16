/*
 * main.c
 *
 *  Created on: Jan 15, 2020
 *      Author: elkingarcia
 */
#include <stdio.h>

int main() {
	/*
	 *
	 * scanning multiple numbers at once
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;

	printf("Enter 3 numbers: ");
	scanf("%lf %lf %lf",&num1,&num2,&num3);

	printf("\nYou entered: %lf %lf %lf",num1,num2,num3);
	getchar();
	getchar();*/

	/*
	 *
	 * chars to ASCII codes
	char result[7];
	printf("Enter 6 characters: \n");
	scanf("%c %c %c %c %c %c", &result[0], &result[1], &result[2], &result[3], &result[4], &result[5]);
	printf("These are the ASCII codes of the characters you entered %d %d %d %d %d %d \n", result[0], result[1], result[2], result[3], result[4], result[5]);
	*/

	double charge, chargeE;
	double electrons;
	printf("Enter the charge: ");

	scanf("%lf",&charge);

	printf("Enter the charge of an electron: ");

	scanf("%lf",&chargeE);

	electrons = (charge / chargeE) * - 1;

	printf("Total number of electrons: %le", electrons);
	printf("Total number of electrons: %lf", electrons);

	return 0;
}

/*
 * main.c
 *
 *  Created on: Jan 29, 2020
 *      Author: elkingarcia
 */

#include <stdio.h>
#include <stdint.h>

struct CarModel
{
	unsigned int carNumber;
	uint32_t 	 carPrice;
	uint16_t	 carMaxSpeed;
	float 		 carWeight;
};

int main()
{
	/* C 89 Method - order of parameters matters
	struct CarModel c1 = {2021, 15000, 220, 1330}, c2 = {4031, 35000, 160, 1900.96};
	*/
	/* C 99 Method - order of paramaters do not matter*/
	//struct CarModel c1 = {.carNumber = 2021, .carPrice = 15000, .carMaxSpeed = 220, .carWeight = 1330};
	printf("Size of unsigned int %lu",sizeof(unsigned int));
	printf("Size of unsigned int32 %lu",sizeof(uint32_t));
	printf("Size of unsigned int16 %lu",sizeof(uint16_t));
	printf("Size of unsigned float %lu",sizeof(float));
	printf("Size of struct carModel is %lu",sizeof(struct CarModel));
	// c2 = {4031, 35000, 160, 1900.96};

	//c1.carNumber = 100;
	/*
	c1.carNumber = 2021;
	c1.carPrice = 15000;
	c1.carMaxSpeed = 220;
	c1.carWeight = 1330;

	c2.carNumber = 4031;
	c2.carPrice = 35000;
	c2.carMaxSpeed = 160;
	c2.carWeight = 1900.96;
	*/
	/* Access member elements of struct var using (.) dot operator to read/write
	printf("Car model 1\nCar Number: %u, Car Price: %u, Car Max Speed: %u, Car Weight: %f\n",c1.carNumber, c1.carPrice, c1.carMaxSpeed, c1.carWeight);
	printf("Car model 2\nCar Number: %u, Car Price: %u, Car Max Speed: %u, Car Weight: %f\n", c2.carNumber, c2.carPrice, c2.carMaxSpeed, c2.carWeight);
	*/
	return 0;
}

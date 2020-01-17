/*
 * pointer.c
 *
 *  Created on: Jan 16, 2020
 *      Author: elkingarcia
 */
#include <stdio.h>
long long int g_data = 0xFFFEABCD11112345;

int main()
{
	/* Store pointer inside program
	 * 0x00007FFF8E3C3824
	 *
	 * This is a just a number for a compiler, not an address
	 * long long int someAddress = 0x00007FFF8E3C3824;
	 *
	 * This is still a long long int\
	 * char* address1 = 0x00007FFF8E3C3824;

		// TypeCast long int to make it a pointer variable
		// Read operation yields 1 bytes of data - so it can only point to char type data
		char* address1 = (char*) 0x00007FFF8E3C3824;

		// Read operation yields 4 bytes of data - pointer var to int type data
		int* address2 = (int*) 0x00007FFF8E3C3824;

		// Read operation yields 8 bytes of data - pointer var to long long int type data
		long long* address3 = (long long*) 0x00007FFF8E3C3824;
	*/

	char data = 100;

	printf("Value of data is %d",data);

	printf("\nThe address of the variable number is %p",&data);

	char* pAddress = &data;

	char value = *pAddress;

	printf("\nThe read value is %d",value);

	printf("\nThe address where read value is stored is %p",&value);
	*pAddress = 65;

	printf("\nValue of data is %d",data);


	char* pAddress1 = (char*)&g_data;

	printf("\nValue at address %p is %d\n:",pAddress1, g_data);

	return 0;

}

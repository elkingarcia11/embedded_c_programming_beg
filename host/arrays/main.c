#include <stdint.h>
#include <stdio.h>

void array_display(uint8_t* pArray, uint32_t nItems);

int main()
{
	uint32_t arrayList[100];
	printf("Size of the array is = %lu\n",sizeof(arrayList));
	printf("Base address of the array is = %p\n", arrayList);

	// Initializes first 3 items of someData array, remaining data items will be automatically initialized to 0
	// Without declaring size of array, but with data items in initialization, it still reserves space of # of items
	/* uint8_t someData[] = {0XFF,0XFF,0XFF}; - valid
	 * vs
	 * uint8_t someData[]; - invalid
	 *
	 */

	// C99 onward len of array can be a variable - ex: someData[len];
	uint8_t someData[10] = {0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF};

	printf("2nd data item = %X\n", *(someData+1));
	/* Add 1 to memory location of base address - to get next item
	   Example: 0xE005 TO E006
	*/
	*(someData+1) = 0X9;
	printf("2nd data item = %X\n", *(someData+1));

	printf("Contents of this array: \n");

	/*
	for(uint32_t i = 0; i < 10; i++)
	{
		printf("%X\t", someData[i]);
	}
	*/

	array_display(someData, (sizeof(someData)/sizeof(uint8_t)));

	array_display(someData+2, (sizeof(someData)/sizeof(uint8_t)-2));

	return 0;
}

void array_display(uint8_t* pArray, uint32_t nItems)
{
	for(uint32_t i = 0; i < nItems; i++)
	{
		printf("%X\t", pArray[i]);
		// printf("%X\t", *(pArray + i));
	}
	printf("\n");
}

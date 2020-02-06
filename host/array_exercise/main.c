#include <stdint.h>
#include <stdio.h>

void display_array(int32_t* pArray, uint32_t len);

void swap_arrays(int32_t* pArray1, int32_t* pArray2, uint32_t len1, uint32_t len2);

int main()
{
	uint32_t len1, len2;

	printf("Enter the size of the arrays: ");
	if(scanf("%d %d", &len1, &len2) == 0)
	{
		printf("Invalid input!");
		return 0;
	}

	int32_t array1[len1], array2[len2];

	// Scan elts for 1st array
	for(uint32_t i = 0; i < len1; i++)
	{
		printf("Enter the %d element of the first array: ", i);
		scanf("%d", &array1[i]);
	}

	// Scan elts for 2nd array
	for(uint32_t i = 0; i < len2; i++)
	{
		printf("Enter the %d element of the second array: ", i);
		scanf("%d", &array2[i]);
	}

	// Print arrays before swap
	printf("Arrays before swap: \n");
	display_array(array1, len1);
	printf("\n");
	display_array(array2, len2);
	swap_arrays(array1, array2, len1, len2);

	printf("Arrays after swap: \n");
	display_array(array1, len1);
	printf("\n");
	display_array(array2, len2);
}

void swap_arrays(int32_t* pArray1, int32_t* pArray2, uint32_t len1, uint32_t len2)
{
	uint32_t temp = 0;

	if(len1 > len2) {
		for(uint32_t i = 0; i < len1; i++) {
			if(i < len2)
			{
				temp = pArray2[i];
				pArray2[i] = pArray1[i];
				pArray1[i] = temp;
			} else {
				pArray1[i] = 0;
			}
		}
	} else {
		for(uint32_t i = 0; i < len2; i++) {
			if(i < len1)
			{
				temp = pArray2[i];
				pArray2[i] = pArray1[i];
				pArray1[i] = temp;
			} else {
				pArray2[i] = 0;
			}
		}
	}
}

void display_array(int32_t* pArray, uint32_t len)
{
	for(uint32_t i = 0; i < len; i++)
	{
		printf("%4d\t", pArray[i]);
	}
}

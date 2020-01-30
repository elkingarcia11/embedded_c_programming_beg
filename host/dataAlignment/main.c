/*
 * main.c
 *
 *  Created on: Jan 29, 2020
 *      Author: elkingarcia
 */
#include <stdio.h>
#include <stdint.h>

struct DataSet
{
	char   data1;
	int    data2;
	char   data3;
	short  data4;
};

int main(){
	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	uint8_t *ptr;
	ptr = (uint8_t*) &data;
	// Aligned data storage consumes more bytes (memory locations) of storage bc of padding - 8 bits
	// Unaligned data takes more instructions to read/write data, so aligned data consumes less instructions



	printf("Memory Address\tContent\n");
	for(uint32_t i = 0; i < sizeof(struct DataSet); i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}

	return 0;
}

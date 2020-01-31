/*
 * main.c
 *
 *  Created on: Jan 29, 2020
 *      Author: elkingarcia
 */

#include <stdio.h>
#include <stdint.h>

union Address
{
	uint16_t	 shortAddr;
	uint32_t 	 longAddr;
};

int main()
{
	union Address addr;
	addr.shortAddr = 0xABCD;
	addr.longAddr = 0xEEEECCCC;
	// Can only contain one value, last value - which is shortened to 4 bytes for short addr, and stays the same for long addr
	printf("Short address: %#X",addr.shortAddr);
	printf("Long address: %#X",addr.longAddr);

	return 0;
}

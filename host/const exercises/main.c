#include <stdio.h>
#include <stdint.h>

uint8_t const data = 10;

int main(){
	//uint8_t const data = 10;
	uint8_t* pData = (uint8_t*)&data;
	*pData = 12;
	printf("Value of data = %d",data);
	return 0;
}

#include <stdio.h>
#include <stdint.h>
/*
struct Packet
{
	uint8_t  crc;
	uint8_t  status;
	uint16_t payload;
	uint8_t  bat;
	uint8_t  sensor;
	uint8_t  longAddr;
	uint8_t  shortAddr;
	uint8_t  addrMode;
};*/

struct Packet
{
	uint32_t  crc		:2;
	uint32_t  status	:1;
	uint32_t  payload	:12;
	uint32_t  bat		:3;
	uint32_t  sensor	:3;
	uint32_t  longAddr	:8;
	uint32_t  shortAddr	:2;
	uint32_t  addrMode	:1;
};

int main()
{
	struct Packet packet;
	uint32_t temp;

	printf("Enter 32 bit packet information: ");
	scanf("%X", &temp);

	packet.crc = (uint8_t) (temp & 3);

	packet.status = (uint8_t)((temp >> 2) & 1);

	packet.payload = (uint16_t) ((temp >> 3) & 0xFFF);

	packet.bat = (uint8_t) ((temp >> 15) & 7);

	packet.sensor = (uint8_t)((temp >> 18) & 7);

	packet.longAddr = (uint8_t)((temp >> 21) & 0xFF);

	packet.shortAddr = (uint8_t) ((temp >> 29) & 3);

	packet.addrMode = (uint8_t) ((temp >> 31) & 1);

	printf("crc: %#X\n",packet.crc);
	printf("status: %#X\n",packet.status);
	printf("payload: %#X\n",packet.payload);
	printf("bat: %#X\n",packet.bat);
	printf("sensor: %#X\n",packet.sensor);
	printf("longAddr: %#X\n",packet.longAddr);
	printf("shortAddr: %#X\n",packet.shortAddr);
	printf("addrMode: %#X\n",packet.addrMode);
	printf("SIZE OF STRUCT: %lu\n",sizeof(packet));
	/* Observation: Size of struct is more than double the size of input/packet info
	 * look into bit fields to reduce memory consumption
	 */
	return 0;
}



#include <stdio.h>
#include <stdint.h>

// Useful for bit extraction
union Packet
{
	uint32_t packetValue;
	// nested struct
	struct
	{
		uint32_t  crc		:2;
		uint32_t  status	:1;
		uint32_t  payload	:12;
		uint32_t  bat		:3;
		uint32_t  sensor	:3;
		uint32_t  longAddr	:8;
		uint32_t  shortAddr	:2;
		uint32_t  addrMode	:1;
	}packetFields;

};

int main()
{
	union Packet packet;

	printf("Enter 32 bit packet information: ");
	scanf("%X", &packet.packetValue);

	/* Remove all of these operations
	packet.crc = (uint8_t) (temp & 3);

	packet.status = (uint8_t)((temp >> 2) & 1);

	packet.payload = (uint16_t) ((temp >> 3) & 0xFFF);

	packet.bat = (uint8_t) ((temp >> 15) & 7);

	packet.sensor = (uint8_t)((temp >> 18) & 7);

	packet.longAddr = (uint8_t)((temp >> 21) & 0xFF);

	packet.shortAddr = (uint8_t) ((temp >> 29) & 3);

	packet.addrMode = (uint8_t) ((temp >> 31) & 1);
	*/

	printf("crc: %#X\n",packet.packetFields.crc);
	printf("status: %#X\n",packet.packetFields.status);
	printf("payload: %#X\n",packet.packetFields.payload);
	printf("bat: %#X\n",packet.packetFields.bat);
	printf("sensor: %#X\n",packet.packetFields.sensor);
	printf("longAddr: %#X\n",packet.packetFields.longAddr);
	printf("shortAddr: %#X\n",packet.packetFields.shortAddr);
	printf("addrMode: %#X\n",packet.packetFields.addrMode);

	printf("SIZE OF STRUCT: %lu\n",sizeof(packet));
	/* Observation: Size of struct is more than double the size of input/packet info
	 * look into bit fields to reduce memory consumption
	 */
	return 0;
}



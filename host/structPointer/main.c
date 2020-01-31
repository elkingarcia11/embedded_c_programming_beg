#include <stdio.h>

struct DataSet
{
	char   data1;
	int    data2;
	char   data3;
	short  data4;
};

// Parsed by address not by value
void displayMemberElements(struct DataSet *pData){
	printf("Data 1: %X\n", pData->data1);
	printf("Data 2: %X\n", pData->data2);
	printf("Data 3: %X\n", pData->data3);
	printf("Data 4: %X\n", pData->data4);
}

int main()
{

	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	/* Rather than create a pointer to the start of data
	uint8_t *ptr = (uint8_t*) &data; */

	printf("Data 1 = %d\n",data.data1);

	// Create pointer of struct -- now holds address of structure var data
	struct DataSet* pData = &data;

	// Pointer_variable [dereference operator {when pointer var is involved vs *ptr}] member_variable = new value
	pData -> data1 = 0x55;

	printf("Data 1 = %d\n",data.data1);
	displayMemberElements(pData);


	return 0;
}


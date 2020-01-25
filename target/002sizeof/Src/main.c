#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	printf("Size of char data type: %u\n", sizeof(char));
	printf("Size of short data type: %u\n", sizeof(short));
	printf("Size of int data type: %u\n", sizeof(int));
	printf("Size of long data type: %u\n", sizeof(long));
	printf("Size of long long data type: %u\n", sizeof(long long));
	printf("Size of float data type: %u\n", sizeof(float));
	printf("Size of double data type: %u\n", sizeof(double));
	for(;;);
}

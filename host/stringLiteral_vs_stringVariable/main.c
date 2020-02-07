
#include <stdio.h>

int main()
{
	// Created in stack, since its local var
	char msg1[] = "Hello how are you?";

	char *msg2 = "Hello how are you?";

	printf("Message 1 is %s\n", msg1);

	printf("Message 2 is %s\n", msg2);

	// Since array is located in address above 200> it is in RAM
	// First elt has base address, so &msg1 gets address of first element,
	// which is equivalent to address and value is equivalent
	printf("Address of message 1 is %p\n", &msg1);
	printf("Value of message 1 is %p\n", msg1);
	printf("Second char of message 1 is %d\n", msg1[1]);

	printf("Address of message 2 is %p\n", &msg2);
	printf("Value of message 2 is %p\n", msg2);
	printf("Second char of message 2 is %d\n", msg2[1]);

	for(;;);
}

#include <stdio.h>

int main(){
	/*
	int b1, b2, ab, ob, xb, nb1, nb2;
	printf("%lu\n",sizeof(int));
	printf("Enter two numbers: ");

	if(!scanf("%d %d", &b1, &b2)){
		printf("Invalid input");
		return 0;
	}

	ab = b1 & b2;
	ob = b1 | b2;
	xb = b1 ^ b2;
	nb1 = ~b1;
	nb2 = ~b2;

	printf("After & operation: %d\n", ab);

	printf("After | operation:  %d\n", ob);

	printf("After XOR operation:  %d\n", xb);

	printf("After NOT operation on first number:  %d\n", nb1);

	printf("After NOT operation on second number:  %d\n", nb2);
*/

	/*Testing of bits - even or odd
	int b1;
	printf("Enter a number: ");

	if(!scanf("%d", &b1)){
		printf("Invalid input");
		return 0;
	}

	if(b1 & 1){
		printf("Number is odd!");
	} else {
		printf("Number is even!");
	}*/

	/* Setting of bits

	int b1;
	printf("Enter a number: ");

	if(!scanf("%d", &b1)){
		printf("Invalid input");
		return 0;
	}
	printf("New number is %d", b1 | 72);
*/

	/* Clearing of bits*/

		int b1;
		printf("Enter a number: ");

		if(!scanf("%d", &b1)){
			printf("Invalid input");
			return 0;
		}

		printf("New number is %d", b1 & 7);

	return 0;
}

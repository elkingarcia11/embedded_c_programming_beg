/*Write a program that takes the user’s age and decides whether a user can cast a vote or not.

		•The minimum age for casting a vote is 18 years

		•Print appropriate messages*/

#include <stdio.h>

int main()
{
	/*
	int age = 0;
	printf("Enter your age: \n");
	scanf("%d",&age);

	if(age > 17) {
		printf("You are allowed to vote!\n");
	} else {
		printf("You are not allowed to vote!\n");
	}*/

	float n1 = 0, n2 = 0;


	printf("Enter two numbers: \n");


	if(scanf("%f", &n1) == 0 || scanf("%f", &n2) == 0)
	{
		printf("Error! Invalid input \n");
		return 0;

	} else {

		int n3 = 0, n4 = 0;
		n3 = n1;
		n4 = n2;

		if((n1 != n3) || (n4 != n2)){
			printf("Warning only comparing integer part\n");
		}

		if(n3 > n4) {
			printf("%d is bigger than %d\n", n3, n4);
		} else {
			if(n3 < n4) {
				printf("%d is bigger than %d\n", n4, n3);
			} else {
				printf("Both numbers are equal\n");
			}
		}
	}

	return 0;
}

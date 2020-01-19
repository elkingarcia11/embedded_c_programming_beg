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
	/*
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

	double income = 0, taxR = 0, taxP = 0;

	printf("Enter total income: ");

	if(scanf("%lf", &income) == 0){
		printf("Error! Invalid input \n");
		return 0;
	}
	if (income < 0) {
		printf("Error! Invalid input \n");
		return 0;
	} else if (income <= 9525) {
		taxR = 0;
		taxP = income * (taxR);
	} else if (income >= 9526 && income <= 38700) {
		taxR = .12;
		taxP = income * (taxR);
	} else if (income >= 38701 && income <= 82500) {
		taxR = .22;
		taxP = income * (taxR);
	} else {
		taxR = .32;
		taxP = income * (taxR)+1000;
	}

	printf("The tax payable is $%lf", taxP);*/

	int a = 5;

	a = 0 ? (a < 9) : a++;
	printf("%d", a);

	return 0;
}

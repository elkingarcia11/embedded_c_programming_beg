#include <stdio.h>

int main()
{
	/*
	char fName[30], lName[30];
	printf("Enter your full name:");
	scanf("%s%s", fName, lName);
	printf("Hi, %s %s\n", fName, lName);*/

	char name[30];
	printf("Enter your full name:");
	scanf("%[^\n]s", name);
	printf("Hi, %s\n", name);

	return 0;
}

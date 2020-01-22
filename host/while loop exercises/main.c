#include <stdio.h>
#include <stdint.h>

int main(){
	int32_t n1 = 0, n2 = 0;
	int8_t c = 0;

	/*
	while(n <= 10){
		printf("%d\n",n++);
	}*/

	printf("Enter start and end numbers (give space between two #s): ");

	if(scanf("%d %d", &n1, &n2) == 0){
		printf("Invalid input\n");
		return 0;
	}

	if(n2 < n1) {
		printf("End number should be larger than starting number \n");
		return 0;
	}

	while(n1 <= n2){
		if(n1 % 2 == 0){
			printf("%4d\t",n1);
			c++;
		}
		n1++;
	}

	printf("\n%d even numbers were found",c);

	return 0;
}

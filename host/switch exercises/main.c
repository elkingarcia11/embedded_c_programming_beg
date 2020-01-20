#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
	char shape;
	double area;
	double radius = 0;
	double base = 0, height = 0;
	double length = 0, width = 0;
	double side = 0;

	printf("Area calculation program\n");
	printf("Circle    --> c\n");
	printf("Triangle  --> t\n");
	printf("Rectangle --> r\n");
	printf("Square    --> s\n");
	printf("Trapezoid --> z\n");
	printf("Enter the code here: ");
	scanf("%c",&shape);
	double tBase = 0, bBase = 0;

	switch (shape) {
	 case 'c':
		 printf("\nEnter circle's radius: ");
		 if(scanf("%lf",&radius) != 0 && radius >= 0) {
			 area = radius*radius*M_PI;
			 printf("The circles's area is %lf", area);
			 break;
		 } else {
			 printf("Invalid input!");
			 return 0;
		 };
	 case 't':
		 printf("\nEnter the base of the triangle: ");
		 if(scanf("%lf",&base) != 0 && base >= 0){
			 printf("\nEnter the height of the triangle: ");
			 if(scanf("%lf",&height) != 0 && height >= 0){
				 area = .5*base*height;
				 printf("The triangles's area is %lf", area);
				 break;
			 } else {
				 printf("Invalid input!");
				 return 0;
			 };
		 } else {
			 printf("Invalid input!");
			 return 0;
		 };
	 case 'r':
		 printf("\nEnter the length of the rectangle: ");
		 if(scanf("%lf",&length) != 0){
			 printf("\nEnter the width of the rectangle: ");
			 if(scanf("%lf",&width) != 0 && width >= 0){
				 area = length*width;
				 printf("The rectangle's area is %lf", area);
				 break;
			 } else {
				 printf("Invalid input!");
				 return 0;
			 };
		 } else {
			 printf("Invalid input!");
			 return 0;
		 };
	 case 's':
		 printf("\nEnter the length of the square's sides: ");
		 if(scanf("%lf",&side) != 0 && side >= 0){
			 area = side*side;
			 printf("The square's area is %lf", area);
			 break;
		 } else {
			 printf("Invalid input!");
			 return 0;
		 };
	 case 'z':
		 printf("\nEnter the top base of the trapezoid: ");

		 if(scanf("%lf",&tBase) != 0 && tBase >= 0){

			 printf("\nEnter the bottom base of the trapezoid: ");

			 if(scanf("%lf",&bBase) != 0 && bBase >= 0){

				 printf("\nEnter the height of the trapezoid: ");

				 if(scanf("%lf",&height) != 0 && height >= 0){
					 area = .5*(tBase+bBase)*height;
					 printf("The area of the trapezoid is %lf",area);
					 break;
				 } else {
					 printf("Invalid input!");
					 return 0;
				 };
			 } else {
				 printf("Invalid input!");
				 return 0;
			 };
		 } else {
			 printf("Invalid input!");
			 return 0;
		 }
	 default:
		 printf("Invalid input!");
		 return 0;
	}

	return 0;
}

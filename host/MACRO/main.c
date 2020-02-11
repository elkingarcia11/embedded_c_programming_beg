#include <stdio.h>

#define PI_VALUE (3.1415f)
//#define AREA_OF_CIRCLE(r) 	((PI_VALUE) * (r) * (r))

int main()
{
	/*
#if 0
	float areaOfCircle = AREA_OF_CIRCLE(2);
	printf("Area of circle with r = 2: %f\n", areaOfCircle);
	areaOfCircle = AREA_OF_CIRCLE(1+1); // 3.1415f * 1 + 1 * 1 + 1 - so we have to use parenthesis generously
	printf("Area of circle with r = 2: %f", areaOfCircle);
#endif*/

#if (!(defined(AREA_OF_CIRCLE)))
	#warning "No macros defined"
#endif

#ifdef AREA_OF_CIRCLE
	float areaOfCircle = AREA_OF_CIRCLE(2);
	printf("Area of circle with r = 2: %f\n", areaOfCircle);
	areaOfCircle = AREA_OF_CIRCLE(1+1); // 3.1415f * 1 + 1 * 1 + 1 - so we have to use parenthesis generously
	printf("Area of circle with r = 2: %f", areaOfCircle);
#endif

	return 0;
}

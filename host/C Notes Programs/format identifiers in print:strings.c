#include <stdio.h>

int main()
{  
    unsigned char pointAtoB, pointBtoC, pointAtoC;
    pointAtoB = 160;
    pointBtoC = 40;
    pointAtoC = pointAtoB + pointBtoC;
    /*Format identifier, how do you want to present int
      %d integer Format
      %f float Format
      %c char format 
      %s string Format
      %u unsigned int Format
      %ld long int format
    */
    printf("Total distance from A2C = %o Km\n", pointAtoC);

    return 0;
}

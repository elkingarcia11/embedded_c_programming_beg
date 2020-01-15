#include <stdio.h>

int myScore;
// Prototype of my function one
void myFunctionOne(void);

int main()
{  
    myScore = 900;
    
    printf("Value of variable myScore = %d\n",myScore);
    
    // This is a function call
    myFunctionOne();
    
    return 0;
}

// Function definition
void myFunctionOne(void) 
{
    myScore = 800;
    printf("002Value of variable myScore = %d\n",myScore);
}
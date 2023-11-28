//Alex Koehn
//Assignment 3.1
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

unsigned int roll(void);
unsigned int counter[10] = {}; // 2 to 12

int main (void)
{
    srand(time(NULL));

    //roll two dice 36000 times and accumulate counts
    for(unsigned int i = 1; i <= 36000; ++i) 
    {
        counter[roll() + roll() - 2] += 1;
    }

    printf("%s%13s%18s%9s\n", "Face", "Frequency", "Expected Ratio", "Ratio");

    for(unsigned int i = 2; i <= 12; ++i) 
    {   if(i <= 7)
            printf("   %u%13u%18.2f%9.2f\n",i, counter[i-2],((i-1.0)/36.0),counter[i-2]/36000.0);
        else if(i >= 8 && i < 10)
            printf("   %u%13u%18.2f%9.2f\n",i, counter[i-2],(i-(1+(2*(i-7))))/36.0,counter[i-2]/36000.0);
        else if (i>= 10)
            printf("   %u%12u%18.2f%9.2f\n",i, counter[i-2],(i-(1+(2*(i-7))))/36.0,counter[i-2]/36000.0);
    }

    return 0;
}

//randomly returns a number between 1 and 6
unsigned int roll(void)
{
    return 1 + (rand() % 6);
}
/*
A right triangle can have sides that are all integers. The set of three integer
values for the sides of a right triangle is called a Pythagorean triple. These three sides must satisfy
the relationship that the sum of the squares of two of the sides is equal to the square of the
hypotenuse. Write a program in terms of function to find all Pythagorean triples for side1, side2,
and the hypotenuse all no larger than 300. You can use a triple-nested for loop that simply tries all
possibilities*/

//Alex Koehn
//assignment 2.3

#include <stdio.h>
#include <math.h>

void findSides();

int main(void)
{
    findSides();
    return 0;
}

//loops through 3 nested for loops 300 times
void findSides()
{
    for(int i = 1; i <= 300; i++)
    {
        for(int j = 1; j <= 300; j++)
        {
            for(int k = 1; k <= 300; k++)
            {
                if(pow(i,2)+pow(j,2) == pow(k,2))
                {
                   printf("triangle: %d, %d, %d", i, j, k);
                   puts("");
                }
            }
        
        }
    }
}

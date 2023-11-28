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

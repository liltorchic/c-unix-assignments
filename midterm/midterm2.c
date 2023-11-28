#include <stdio.h>


unsigned int input;

unsigned int seq(unsigned int n);

int main()
{
    printf("%s","Enter an integer less than 50: ");
    scanf("%ui", &input); puts("");
    printf("%s%u","Output: ", seq(input));
    return 0;
}

unsigned int seq(unsigned int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 2;
    }
    else
    {
        return 2*seq(n-1) + 3*seq(n-2) + seq(n-3);
    }
   
}

 #include <stdio.h>
 #include <math.h>

unsigned int input;

 float seq(unsigned int n);
 float ser(unsigned int i);

int main()
{
    printf("%s","Enter an integer less than 50: ");
    scanf("%ui", &input);
    printf("%s%.2f","The sum of the series is: ", seq(input));
    return 0;
}

float seq(unsigned int n)
{
    float count = 0;

    for (int j = 1; j <= n; j++)
    {
        count += ser(j);
    }

 return count;
   
}

float ser(unsigned int i)
{
    return (powf(i, 3.0))/(i+2.0);
}


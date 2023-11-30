/*
Write a function countEven(int*, int) which receives an integer array (user input array) and its size, and
returns the number of even numbers in the array (it receives the array as a pointer).*/

//Alex Koehn
//Assignment 4.3

#include <stdio.h>

//Returns int count of even ints in array
int countEven(int* a, int s); 

int main(void)
{
    int size;
    int evenResult = 0;

   printf("How many numbers to enter:  ");
   scanf("%d", &size);

    //if user inputed size greater than 0
    if(size != 0)
    {
        int input[size];

        for(int i = 0; i < size; i++)
        {
            printf("enter number:  ");
            scanf("%d", &input[i]);
        }

        evenResult = countEven(input, size);
    }

    printf("Number of even numbers: %d", evenResult);

    puts("");
    
    return 0;
}

int countEven(int* a, int s)
{
    int counter = 0;

    for(int i = 0; i < s; i++)
    {
        //if number perfectly divides by 2 with no remainder
        if(a[i] % 2 == 0)
        {
            counter++;
        }
    }

    return counter;
}

/*
A prime number is any natural number greater than 1 that is divisible only by 1 and by itself.
Write a C program, Pseudo code, and draw a flowchart that reads an integer and determines
whether it is a prime number or not */

//  Alex Koehn
//  09/26/2023
//
// Assignment 1.6
//

#include <stdio.h>

int main(void)
{

    printf("input an integer to test if it is a prime number: ");
    int input;

    int isPrime = 1;//initilize isPrime to true

    scanf("%d", &input);

    for (int i = 2; i <= (input/2); i++)//we only have to check first half, step through integers
    {
       if(input % i == 0)//if we find a number that divides into input evenly
       {
            isPrime = 0;//set prime status to false
            break;//exit for loop, checking other numbers is unnecessary
       }
    }

    if(isPrime == 1)//if we found a prime number
    {
        printf("%d is a prime number\n", input);
    }
    else//if we did not find a prime number
    {
        printf("%d is not a prime number\n", input);    
    }

    return 0;
}


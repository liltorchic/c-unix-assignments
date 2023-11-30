/*
Write a program that inputs three different integers from the keyboard, then prints the sum, the
average, the product, the smallest and the largest of these numbers. The screen dialogue should
appear as follows:

Enter three different integers: 13 27 14
Sum is: 54
Average is: 18
Product is: 4914
Smallest is: 13
Largest is: 27
*/

//  Alex Koehn
//  09/24/2023
//
// Assignment 1.1
//

#include <stdio.h>

int main(void)
{

    printf("Enter three different integers: ");

    //declare input vars
    int input1, input2, input3;

    //get input
    scanf("%d%d%d", &input1, &input2, &input3);

    //declare and calculate result variables
    int sum = input1 + input2 + input3;
    int avg = sum / 3;
    int product = input1 * input2 * input3;
    int smallest = input1;
    int largest = input1;

    //determine smallest of three inputs
    if (smallest > input2 || smallest > input3)    // if input1 is not the smallest
    {
        if(smallest > input2 && smallest < input3) // if input2 is smallest
            smallest = input2;
        else                                       // else input3 is smallest
            smallest = input3;
    }

    //determine largest of three inputs
    if (largest < input2 || largest < input3)      // if input1 is not the largest
    {
        if(largest < input2 && largest > input3)   // if input2 is largest
            largest = input2;
        else                                       // else input3 is largest
            largest = input3; 
    }


    //prints results to user
    printf("\nsum is: %8d", sum);
    printf("\naverage is: %4d", avg);
    printf("\nproduct is: %7d", product);
    printf("\nsmallest is: %3d", smallest);
    printf("\nlargest is: %4d", largest);
    printf("\n");

    return 0;
}


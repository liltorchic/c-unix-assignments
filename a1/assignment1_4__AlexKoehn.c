//  Alex Koehn
//  09/25/2023
//
// Assignment 1.4
//

#include <stdio.h>

int main(void)
{

    printf("Enter a 4 digit number: ");
    int input;

    scanf("%d", &input);

        if(input % 1000 >= 1)
        {
            int remainder = input % 1000;//calculate remainder
            int thousands = (input - remainder) / 1000; //calculate thousands place as one digit number
            input = remainder;
            printf("%d%s",thousands , "\t");//print thousands place
        }

        if(input % 100 >= 1)
        {
            int remainder = input % 100;//calculate remainder
            int hundreds = (input - remainder) / 100;//calculate hundreds place as one digit number
            input = remainder;
            printf("%d%s",hundreds , "\t");//print hundreds place
        }

        if(input % 10 >= 1)
        {
            int remainder = input % 10;//calculate remainder
            int tens = (input - remainder) / 10;//calculate tens place as one digit number
            input = remainder;
            printf("%d%s",tens , "\t");//print tens place
        }


        printf("%d%s",input , "\t");//print ones place
        

 
    return 0;
}


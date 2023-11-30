/*
Use a one-dimensional array to solve the following problem. A company
pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of
their gross sales for that week. For example, a salesperson who grosses $3,000 in sales in a week
receives $200 plus 9% of $3,000, or a total of $470. Write a C program (using an array of counters)
that determines how many of the salespeople earned salaries in each of the following ranges
(assume that each salesperson’s salary is truncated to an integer amount)*/

//Alex Koehn
//Assignment 3.2
#include <stdio.h>

void enterSales(unsigned int c[], unsigned int wSalary);

unsigned int calcSalary(unsigned int wSales);

int main (void)
{
    const size_t aSize = 9;
    unsigned int counter[aSize] = {0};

    unsigned int input;

    do
    {
        printf("%s\n", "Enter weekly sales or enter 0 to see summary and exit");
        printf("%s", "? ");
        scanf("%u", &input);
        if(input != 0)
        {
            enterSales(counter, calcSalary(input));
        }
        puts("");
    } while(input != 0);

    //print summary
    printf("%s%18s\n", "Salary", "Count");

    for(size_t i = 0; i <= aSize - 1; ++i) 
    { 
        if(i == aSize)
        {
            printf("%s%zu%s%u\n", "$",i+2,"00 and over",counter[i]);
        }
        else
        {
            printf("%s%zu%s%zu%s%12u\n", "$",i+2,"00-",i+2,"99",counter[i]);
        }
    }
    
    return 0;
}

unsigned int calcSalary(unsigned int wSales)
{
    return 200 + (0.09 * wSales);
}

void enterSales(unsigned int c[], unsigned int wSalary)
{
    if(wSalary >= 200 && wSalary <= 299)
    {
        c[0] += 1;
    }
    else if(wSalary >= 300 && wSalary <= 399)
    {
        c[1] += 1;
    }
    else if(wSalary >= 400 && wSalary <= 499)
    {
        c[2] += 1;
    }
    else if(wSalary >= 500 && wSalary <= 599)
    {
        c[3] += 1;
    }
    else if(wSalary >= 600 && wSalary <= 699)
    {
        c[4] += 1;
    }
    else if(wSalary >= 700 && wSalary <= 799)
    {
        c[5] += 1;
    }    
    else if(wSalary >= 800 && wSalary <= 899)
    {
        c[6] += 1;
    }
    else if(wSalary >= 900 && wSalary <= 999)
    {
        c[7] += 1;
    }
    else if(wSalary >= 1000)
    {
        c[8] += 1;
    }
    else
    {
        //invalid sales range
    }
}

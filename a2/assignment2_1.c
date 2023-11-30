/*
Collecting money becomes increasingly difficult during periods of
recession, so companies may tighten their credit limits to prevent their accounts receivable (money
owed to them) from becoming too large. In response to a prolonged recession, one company has
cut its customers’ credit limits to 4/5. Thus, if a particular customer had a credit limit of $5000,
it’s now $4000. If a customer had a credit limit of $10000, it’s now $8000. Write a program in
form of a function that analyzes the credit status of three customers of this company. 
For each customer you’re given:
a) The customer’s account number.
b) The customer’s credit limit before the recession.
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should
determine (and print) which customers have current balances that exceed their new credit limits*/

//Alex Koehn
//assignment 2.1

#include <stdio.h>

double calcNewLimit(double);
void runBankTasks();

int main(void)
{
    runBankTasks();
    return 0;
}

//calculates and returns new limit
double calcNewLimit(double limit)
{
    return ((4.0/5) * limit);
}

void runBankTasks()
{
    //declare database
    unsigned int acn[] = {1,2,3};
    double limit[] = {5000.0, 10000.0, 60.0};
    double balance[] = {8000.0, 650.0, 120.0};

    int length = sizeof(acn) / sizeof(acn[0]); // get length of array

    //loop through each account
    for(int i = 0; i < length; i++)
    {
        printf("%s%i","Account Number: ",acn[i]);
        
        limit[i] = calcNewLimit(limit[i]); // calculate new credit limit

        printf("%s%.2f","\nNew credit limit: ",limit[i]);

        if(limit[i] < balance[i])
        {
             printf("\nCustomer balance exceeds limit!!!");
        }

        puts("");puts("");
    }
}

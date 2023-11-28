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

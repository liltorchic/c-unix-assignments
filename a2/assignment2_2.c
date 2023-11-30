/*
A company pays its employees as managers (who receive a fixed weekly salary),
hourly workers (who receive a fixed hourly wage for up to the first 40 hours they
work and “time-and-a-half”—i.e., 1.5 times their hourly wage—for overtime hours worked),
commission workers (who receive $350 plus 6.5% of their gross weekly sales), or pieceworkers
(who receive a fixed amount of money for each of the items they produce—each pieceworker in
this company works on only one type of item). Write a program in terms of functions to compute
the weekly pay for each employee. You do not know the number of employees in advance. Each
type of employee has its own pay code: Managers have pay code 1, hourly workers have code 2,
commission workers have code 3 and pieceworkers have code 4. Use a switch (or nested if-else)
to compute each employee’s pay based on that employee’s pay code. You should ask the user (i.e.,
the payroll clerk) to enter the appropriate facts your program needs to calculate each employee’s
pay based on that employee’s pay code. [Note: You can input values of type double using the
conversion specifier %lf with scanf.] */

//Alex Koehn
//assignment 2.2

/*
managers (1)       -  fixed weekly salary
hourly workers (2) -  fixed wage for first 40hr,
                        then 1.5x for overtime
commision (3)      -  $350 + 6.5% gross weekly sales
piecework (4)      -  $$ per item completed
*/

#include <stdio.h>

double calcPay_Managers(int salary);
double calcPay_Hourly(int hours, double rate);
double calcPay_Com(double wSales);
double calcPay_Piece(int items, double rate);

int main(void)
{
    int input, in1 = 0;
    double in2 = 0.0;
    do
    {
        printf("%s", "Select Employee type");
        printf("%s", "\n1 managers");
        printf("%s", "\n2 hourly");
        printf("%s", "\n3 commision");
        printf("%s", "\n4 piecework\n");
        scanf("%i", &input);
        puts("");

        switch(input)
        {
            case 1: 
                printf("%s", "input yearly salary: ");
                scanf("%i", &in1);
                printf("%s%.2f", "\npaystub: ", calcPay_Managers(in1));
                puts("");puts("");
            break;

            case 2: 
                printf("%s", "input hours worked: ");
                scanf("%i", &in1);
                printf("%s", "input hourly rate: ");
                scanf("%lf", &in2);
                printf("%s%.2f", "\npaystub: ", calcPay_Hourly(in1, in2));
                puts("");puts("");
            break;

            case 3: 
                printf("%s", "input sales figure: ");
                scanf("%lf", &in2);
                printf("%s%.2f", "\npaystub: ", calcPay_Com(in2));
                puts("");puts("");
            break;

            case 4: 
                printf("%s", "input items competed: ");
                scanf("%i", &in1);
                printf("%s", "input rate: ");
                scanf("%lf", &in2);
                printf("%s%.2f", "\npaystub: ", calcPay_Piece(in1,in2));
                puts("");puts("");
            break;

            default: printf("%s", "Invalid input\n");
            break;
        }

        input = 0;
        printf("%s", "Calculate another? 1 = yes, -1 = exit: ");
        scanf("%i", &input);
        puts("");
    } while(input != -1);

    return 0;
}

double calcPay_Managers(int salary)
{
    return (salary / 52.0);
}

double calcPay_Hourly(int hours, double rate)
{
    double pay;

    if(hours >= 40) //pay with overtime
    {
        pay = 40 * rate;
        hours = hours - 40;
        pay = pay + (hours * (rate * 1.5));
    }
    else
    {
        pay = hours * rate;
    }

    return pay;
}

double calcPay_Com(double wSales)
{
    return 350 + (wSales * 1.065);
}

double calcPay_Piece(int items, double rate)
{
    return (items * rate);
}

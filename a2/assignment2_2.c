//Alex Koehn
//assignment 2.2

//managers (1) - fixed weekly salary
//hourly workers (2) - fixed wage for first 40hr,
//                 then 1.5x for overtime
//commision (3) - $350 + 6.5% gross weekly sales
//piecework (4) - $$ per item completed

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

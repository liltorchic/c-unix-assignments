#include <stdio.h>

float calcBmiPounds(float w, float h);
float calcBmiKilo(float w, float h);

 unsigned int c_input;
 float weight, height;
 float bmi;

int main()
{
    printf("%s","do you want to use pounds and Inches (1) or kilograms and meters (2): ");
    scanf("%ui", &c_input); puts("");
    printf("%s","Please Enter weight: ");
    scanf("%f", &weight); puts("");
    printf("%s","Please Enter height: ");
    scanf("%f", &height); puts("");

    switch(c_input)
    {
        case 1: bmi = calcBmiPounds(weight, height); break;
        case 2: bmi = calcBmiKilo(weight, height); break;
        default: bmi = calcBmiPounds(weight, height); break;
    }

    printf("%s%.2f","BMI VALUES is: ", bmi);
    printf("%s","\nConsidering the NIH guidelines, you are considered as: ");

    if(bmi < 18.5)
    {
        printf("%s","Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.99)
    {
        printf("%s","Normal");
    }
    else if (bmi >= 25 && bmi <= 29.99)
    {
        printf("%s","Overweight");
    }
    else
    {
        printf("%s","Obese");
    }

    return 0;
}

float calcBmiPounds(float w, float h)
{
    return (w * 703.0) / (h * h);
}

float calcBmiKilo(float w, float h)
{
    return (w * 1.0) / (h * h);
}

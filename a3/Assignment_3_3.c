//Alex Koehn
//Assignment 3.3

#include <stdio.h>

int contains(int arr[], int size, int target);
void getUnion(int a[], int aSize, int b[], int bSize);

int main (void)
{
    int s1[10] = {};
    int s2[10] = {};

    int input;

    printf("%s\n", "Enter 10 numbers one at a time for set 1");
    for(int i = 0; i < 10; i++)
    {
        printf("%s", "? ");
        scanf("%i", &input);
        s1[i] = input;
    }

    puts("");

    printf("%s\n", "Enter 10 numbers one at a time for set 2");
    for(int i = 0; i < 10; i++)
    {
        printf("%s", "? ");
        scanf("%i", &input);
        s2[i] = input;
    }

    puts("");

    getUnion(s1, 10, s2, 10);

    puts("");

    return 0;
}

//builds a new set from union of a[] and b[]
void getUnion(int a[], int aSize, int b[], int bSize)
{

    int set[20] = {};
    int size = 0;

    for (int i = 0; i < aSize; i++) 
    {
        if (contains(set, size, a[i]) == 0) 
        {
            set[size++] = a[i];
        }
    }
 
    for (int i = 0; i < bSize; i++) 
    {
        if (contains(set, size, b[i]) == 0) 
        {
            set[size++] = b[i];
        }
    }
    printf("The union is:\n");
 
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", set[i]);
    }
    puts("");
}

//determins if a target value is contained
//in an array
int contains(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return 1;
        }
    }
    return 0;
}

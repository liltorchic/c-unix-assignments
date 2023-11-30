/*
Write a program in C to count the number of vowels and consonants in a string using a pointer (The
maximum length of the input string from the user is 20)
*/
//Alex Koehn
//Assignment 4.2

#include <stdio.h>

#define SIZE 20

//counts features from a and updates values v and c using pointers
void countFeatures(char *a, int *v, int *c);

int main(void)
{
    int vowels = 0;
    int consonants = 0;

    printf("Enter text (max %i chars): ", SIZE);
    char input[SIZE];
    scanf(" %[^\n]", input);//reads whole line

    countFeatures(input, &vowels, &consonants);

    printf("Vowels: %i\nConsonants: %i", vowels, consonants);

    puts("");
    return 0;
}

void countFeatures(char *a, int *v, int *c)
{
    char *ptr;
    ptr = a;

    int *vPtr;
    vPtr = v;

    int *cPtr;
    cPtr = c;

    //loop through array
   while(*ptr != '\0')
   {
        if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U'|| *ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
            (*vPtr)++;//dereferences pointer to increment value stored
        else
            (*cPtr)++;//dereferences pointer to increment value stored

        ptr++;//increment array pointer
   }

}

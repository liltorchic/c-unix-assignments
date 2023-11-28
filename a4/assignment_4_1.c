//Alex Koehn
//Assignment 4.1

#include <stdio.h>

void concat(char *s1, char *s2, char *r);

int main(void)
{
    const size_t s = 20;
    char string1[s] = "hey whats up ";
    char string2[s] = "I cant wait to code";
    char result[s*2] = {};//init result size as twice as large as input strings
    printf("string 1: %s \nString 2: %s\n", string1, string2);
    concat(string1, string2, result);//concatenates 'string1' with 'string2' and places the result in 'result'
    printf("concat: %s", result);
    return 0;
}

//concatenate s1 and s2 and places them in r
//uses only pointers
void concat(char *s1, char *s2, char *r)
{
    //loop through first char array
    while(*s1)
    {
        *r = *s1;//add char to r
        r++;//increment r pointer by one
        s1++;//increment s1 pointer by 1
    }

    //loop through second char array
    while(*s2)
    {
        *r = *s2;//add char to r
        r++;//increment r pointer by one
        s2++;//increment s2 pointer by one
    }
}

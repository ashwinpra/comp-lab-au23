#include <stdio.h>

#define NUM 100

struct employee{
    int ID;
    char name[30];
};

int main()
{
    int n = 32;
    float f1 = .72e-05;
    float f2 = 13.25;
    char c = 'a';
    double d = 25.;
    char s1[] = "This is a string\n\t";
    char s2[5] = "";

    /* this is a multi line comment. 
    this is another line of the multi line comment */

    // this is a single line comment

    if(n <= 30)
        n++;
    else
        n--;

    printf("n = %d\n", n);

    for(int i = 0; i < 10; i++)
        printf("i = %d\n", i);

    return 0;
}
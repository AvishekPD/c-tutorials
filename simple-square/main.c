#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    int a, b;
    printf("Enter any number:");
    scanf("%d", &a);

    b = square(a);
    printf("The square of the number is:%d\n", b);
}

int square(int num)
{
    int outPut;

    outPut = num * num;
    return(outPut);
}

//How to take input and make use of do while loop

//ODD LOOP user defined ending
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int  userInput;
    char userCount;
    do
    {
	printf("Enter a number you want to get sqaure root for :");
	scanf("%d%*c", &userInput); //That %*c skips any char after the userInput
	printf("So the Square of that number is:%d\n", userInput * userInput);
	printf("So do you wanna continue? y/n :");
	scanf("%s", &userCount);

    }while(userCount == 'y'); //Exits the Loop

    printf("\nSankyu\n");

    return 0;
}

//Check File the program is trying to access exist or 
//In this case it does not

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fail; //Here we declare a pointer for a file

    fail = fopen("Lol.txt", "r"); //Opening a file Lol

    if (fail == NULL) //Will check for file, if it doens't exist the NULL is return
	printf("File doesn't exist"); //Prints

    exit(0);

}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

FILE *testFile; //Creating place to hold the value on file and storing in a pointer


int main()
{
    char store; //To store the characters from the file so can use it

    testFile = fopen ("Test.txt", "r"); //Opens the file in read mode

    while (1) //While true, is here so it will only stop with a break function
    {
	store = fgetc(testFile); 
	//Gets the data from file and store in the 'store' char we made

	if(testFile == EOF) //Test if it is end of file
	    break; //If true the break out of loop

	printf("%c", store); //If not true then print the chars from testFile
    }

    fclose (testFile); //To close the file safely

    exit(0);
}

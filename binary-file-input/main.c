#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *dataSheet = fopen("Database.dat", "rb"); //define a pointer and Open the file in Binary

    char counter = 'Y'; //Will use this as Counter

    if(dataSheet == NULL) //Check if the File is valid or not
    {
	printf("The source file cannot be open");
	return 0;
    }

    struct emp  //Defining a Structure
    {
	char Name;
	int Age;
	float Inc;
    };
    struct emp e; //Binding that structure to "e"

    while(counter == 'Y') //While the counter is Yes or Y 
    {
	printf("Enter the Name Age and Income");
	scanf("%s %d %f", e.Name, &e.Age, &e.Inc); //scan for name, age and inc and save it to "e"
	fwrite(e, sizeof(e), 1, dataSheet); 
	//Write from newly save "e" with the size of byte for e and the only 
	//1 struct in it and save it to address save at dataSheeet point aka the FILE
	fflush(stdin); //Clears the input buffer by force
	printf("Do you want to continue Y/N:"); 
	counter = getchar(); //get the input and updates the counter 
    }

    if(fclose(dataSheet) == NULL) //Check is file closed sucessfully
    {
	printf("The file is saved!");
    }
    else
    {
	printf("Error while saving file");
    }

    return 0;
}

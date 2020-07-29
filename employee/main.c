#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *datasheet = fopen("Database.dat", "w");
    system("clear");

    if(datasheet == NULL)
    {
	printf("The file cannot be open");
	return 0;
    }

    char counter = 'Y';
    struct emp 
    {
	char Name[25];
	int age;
	float inc;
    };
    struct emp e;

    while(counter == 'Y')
    {
	printf("Enter the name, age and salary\n");
	scanf("%s %d %f%*c", e.Name, &e.age, &e.inc);
	fprintf(datasheet,"%s %d %f", e.Name, e.age, e.inc);

	printf("Do you want to continue Y/N\n");
	fflush(stdin);
	fputs("\n\n", datasheet);
	counter = getchar();
    }

    if(fclose(datasheet) != NULL)
    {
	printf("The file cannot be close properly");
    }

    return 0;
}

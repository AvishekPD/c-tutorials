#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void filecopy();

int main(int argc, char *argv[])
{
    FILE *show;
    void filecopy(FILE *, FILE *);

    if (argc == 1)
    {
	puts("Error: No file provided");
	return 1;
    }
    
    else 
    {
	while( --argc > 0)
	{
	    if ((show = fopen(*++argv, "r")) == NULL)
	    {
		printf("cat: can't open the file %s\n", *argv);
		return 9;
	    }
	    else 
	    {
		filecopy(show, stdout);
		fclose(show);
	    }
	}
    }
    return 0;
}

void filecopy(FILE *ifile, FILE *ofile)
{
    char c;

    while ((c = fgetc(ifile)) != EOF)
    {
	putc(c, ofile);
    }
}

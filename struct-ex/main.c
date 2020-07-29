#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    struct book
    {
	char Name[25];
	int Page;
	float Price;
    };

    struct book book1, book2, book3;

    printf("Enter the name, page numbers and price of books:\n");
    scanf("%s %d %f", &book1.Name, &book1.Page, &book1.Price);
    printf("Enter the name, page numbers and price of books:\n");
    scanf("%s %d %f", &book2.Name, &book2.Page, &book2.Price);
    printf("Enter the name, page numbers and price of books:\n");
    scanf("%s %d %f", &book3.Name, &book3.Page, &book3.Price);

    printf("The name Of book is %s",book1.Name);
    printf("\nThe price of that book is %f", book1.Price);
    printf("\nThe number of page in it is %d", book1.Page);

    printf("\nThe name Of book is %s",book2.Name);
    printf("\nThe price of that book is %f", book2.Price);
    printf("\nThe number of page in it is %d", book2.Page);

    printf("\nThe name Of book is %s",book3.Name);
    printf("\nThe price of that book is %f", book3.Price);
    printf("\nThe number of page in it is %d\n", book3.Page);

 
}

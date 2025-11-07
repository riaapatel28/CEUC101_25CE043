
#include<stdio.h>
#include<string.h>
union book
{
    int a_num;
    char tital[50];
    char author[50];
    float price;
    int issue;
};

int main()
{
    union book book_data;
    int _a_num;
    char _tital[50];
    char _author[50];
    float _price;
    int _issue;



    printf("======charusat library ==========");
    printf("\nEnter the book accession number\n");
    scanf("%d",&book_data.a_num);
    _a_num=book_data.a_num;

    printf("\n Enter the book tital :\n");
    fflush(stdin);
    gets(book_data.tital);
    strcpy( _tital,book_data.tital);

    printf("\nEnter Author's name:\n");
    fflush(stdin);
    gets(book_data.author);
    strcpy(_author,book_data.author) ;

    printf("\nEnter book price:\n");
    scanf("%f",&book_data.price);
    _price=book_data.price;

    printf("\nIs the book issued?(Enter 1 if yes and 0 if no)\n");
    scanf("%d",&book_data.issue);
    _issue=book_data.issue;

    printf("\n========Book details:=========\n");
    printf("accession number:      %d\n",_a_num);
    printf("Tital:                 %s\n",_tital);
    printf("Author's name          %s\n",_author);
    printf("Book price             %f\n",_price);
    printf("Status                 %s\n",(_issue==1)?"issued":"available");
    printf("\n25CE002_HardiAgola");
    return 0;
}

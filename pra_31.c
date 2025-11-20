
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the string:\n");
    scanf("%d",&n);
    char *ptr;

    printf("Enter the string:\n");
    ptr=(char *)calloc(n,sizeof(char));
    fflush(stdin);
    gets(ptr);

    int n2;
    printf("\nEnter the new size:\n");
    scanf("%d",&n2);

    printf("Enter the string to add:\n");
    ptr=(char *)realloc(ptr,n2*sizeof(char));
    fflush(stdin);
    gets(ptr);

    printf("\nYour string is:");
    printf("%s",ptr);
    free(ptr);
    return 0;
}

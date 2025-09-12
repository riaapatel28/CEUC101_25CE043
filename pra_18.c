#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter number=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}

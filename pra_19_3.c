#include<stdio.h>
void main()
{
    int r,r1,r2,i,j,x,y;
    scanf("%d",&r);
    r1=(r/2)+1;
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=(r1-i);j++)
        {
            printf("0");
        }
        x='A';
        for(j=r1-i+1;j<=r1;j++)
        {
            printf("%c",x);
            x++;
        }
        y=64+i-1;
        for(j=1;j<=i-1;j++)
        {
            printf("%c",y);
            y--;
        }
        printf("\n");
    }
    r2=(r/2);
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("0");
        }
        printf("\n");
    }

}

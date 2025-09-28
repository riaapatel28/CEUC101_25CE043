/*for customer shopping discount
editor:riya kakadiya
date:12th sept,2025*/

#include<stdio.h>
void main()
{
	int t;
	printf("enter total amount=");
	scanf("%d",&t);
	if(t<1000)
	{
		printf("no discout!!!");
	}
	else if(t<=5000)
	{
		printf("%f",t-(t*10/100.0));
	}
	else
	{
		printf("%f",t=(t*20/100.0));
	}

}


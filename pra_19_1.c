/*aim:pattern1
editor:riya kakadiya
date:12th sapt,2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}

		}
		printf("\n");
	}

}

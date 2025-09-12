/*aim:hotel restorant bill
editor:riya kakadiya
date:12th spte,2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,a,x,y;
	float fa,c;
	printf("1 - burger=150");
	printf("\n2 - pizza=200");
	printf("\n3 - pasta=120");
	printf("\n4 - sandwich=100");
	printf("\n5 - french fries=80");
	printf("\n0 - exit");
	fa=0;
	x:
	printf("\nEnter your item number : ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:

			fa=fa+150;
			break;

		case 2:

			fa=fa+200;
			break;

		case 3:

			fa=fa+120;
			break;

		case 4:
			fa=fa+100;
			break;

		case 5:
			fa=fa+80;
			break;
		case 0:
			goto y;

		default:
			printf("not available");
	}
	goto x;
	y:printf("enter=%f",fa);

	if(fa>500)
	{
		c=fa-(fa*0.05);
		printf("discount amount=%f",c);
	}
	else
	{
		printf("no discount");
	}
}

#include<stdio.h>
void main ()
{
	float h,w,bmi;
	printf("enter your hight in meter");
	scanf("%f",&h);
	printf("enter your weightin kilogram");
	scanf("%f",&w);
	bmi=w/(h*h);
	printf("your bmi is %f",bmi);
}


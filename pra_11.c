/*aim:giving grade according to marks
editor:riya kakadiya
date:12th sapt,2025*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	printf("enter marks=");
	scanf("%d",&m);

	m>=90?printf("\nGrade=A"):m>=80 && m<90?printf("\nGrade=B"):m>=70 && m<80?printf("\nGrade=c"):m>=60 && m<70?printf("\nGrade=D"):m<60?printf("\nGrade=F"):printf("\ninvalid");
}

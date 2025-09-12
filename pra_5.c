/*count of literate and illiterate men or women
editor:riya kakadiya
date:12th sept,2025*/
#include<stdio.h>
#include<conio.h>

void main()
{
	long int P=1441981744,M,W,TP,Lm,Lw,ILM,ILW;
	float PW=48.4,PM,OP=85.95,IM=80.95,IW=62.84;
    clrscr();
	PM=100-48.4;
	M=(P*PM)/100;
	W=(P*PW)/100;
	TP=(P*OP)/100;
	Lm=(IM*M)/100;
	Lw=(IW*W)/100;
	ILM=M-Lm;
	ILW=W-Lw;
	printf("total population=%ld",TP);
	printf("\ntotal population of men=%ld",M);
	printf("\ntotal population of women=%ld",W);
	printf("\nnum. of literate man=%ld",Lm);
	printf("\nnum. of literate women=%ld",Lw);
	printf("\nillierate women=%ld",ILW);
	printf("\nillierate men=%ld",ILM) ;
	getch();
}

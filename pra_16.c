/*aim:matchstick game
editor:riya kakadiya
date:12nd sapt,2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=21,up,cp;
	printf("start game\n");
	while(n>1)
	{
		printf("matchstick left=");
		scanf("%d",&n);
		printf("\nyour turn to pick 1 to 4 number only!!");
		scanf("%d",&up);
		if(up<1 || up>4)
		{
			printf("invalid ! pick again\n");
			continue;
		}

		n=n-up;
		if(n==1)
		{
			printf("you lose! computer wins\n");
			break;
		}

		cp=5-up;
		printf("computer picks :");
		scanf("%d",&cp);
		n=n-cp;

	}


}

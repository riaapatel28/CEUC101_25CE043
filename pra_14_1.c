/*aim:in ATM machine
editor:riya kakadiya
date:12th sapt,2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float balance=5000.0,wamount,money;
	int choice;
	do
	{
	printf("\n1.balance,2.remaining amount,3.deposit money,4.exit");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("check the balance=%f",balance);
		break;

	case 2:
		printf("\nwithdraw amount=");
		scanf("%f",&wamount);
		if(wamount<balance)
		{
			balance=balance-wamount;
			printf("\nremaining balance=%f",balance);
		}
		else
		{
			printf("insufficient balance\n");
		}
        break;

    case 3:
        printf("\nenter the deposit money that you have to add=");
		 scanf("%f",&money);
		 if(money>0)
         {
             balance=balance+money;
             printf("new balance=%f\n",balance);
         }
         else
         {
             printf("invalid\n");
         }
	case 4:
		printf("\nexit");
		break;
	default:
		printf("\nplease make your choice only 1,2 or 3");
		break;
	}
}while(choice!=3);

}


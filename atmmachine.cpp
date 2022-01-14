//atm machine   previous balance=10,00,000

#include<stdio.h>
main(){
	int a,b,c,total_amount=1000000;
	char ch;
	printf("     'WELCOME TO ABI'   \n");
	printf("PLEASE SELECT DESIRED OPTION \n");
	printf("1.MAIN MENU  2.CHECK BALANCE  3.EXIT\n");
	printf("(enter 1/2/3)\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("1.CASH WITHDRAWAL  2.EXIT\n");
			scanf("%d",&b);
		
				switch(b)
				{
				case 1:	
					printf("ENTER AMOUNT TO WITHDRAW:\n");
					scanf("%d",&c);
					total_amount-=c;
					printf("AMOUNT WITHDRAWN\n");
					printf("BALANCE AMOUNT:%d  \n",total_amount);
					printf("THANKYOU FOR BANKING WITH US!\n");
					break;
				
				case 2:
					printf("THANKYOU FOR BANKING WITH US!\n");
					break;
				}
			
		case 2:
			printf("CURRENT ACCOUNT BALANCE IS \n",total_amount);
						break;
			
		case 3:
			printf("THANKYOU FOR BANKING WITH US!\n");
			break;
}}

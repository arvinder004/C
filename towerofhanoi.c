///tower of hanoi.C

#include<stdio.h>
void towerofhanoi(int n,char start_rod,char dest_rod, char extra_rod)  //n=number of rings
{
	
	if (n==1)
	{
		printf("\n move disk 1 from rod %c to roc %c",start_rod,dest_rod);
		return;
	}
	towerofhanoi(n-1,start_rod,extra_rod,dest_rod);
	printf("\n move disk %d from rod %c to rod %c",n,start_rod,dest_rod);
	towerofhanoi(n-1,extra_rod,dest_rod,start_rod);
}

int main()
{	int n;
	printf("_________TOWER OF HANOI________\n");
	printf("ENTER THE NUMBER OF DISCS:");
	scanf("%d",&n);
	towerofhanoi(n,'A','B','C');
	return 0;
}
	
	

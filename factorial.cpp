//to find factorial of a number.

#include<stdio.h>
int main(){
	int a,b=1;
	printf("ENTER THE NUMBER TO FIND FACTORIAL:");    //asking the number to find factorial
	scanf("%d",&a);
	for (int i = 1;i<=a;i++){
		b*=i;
	}
 	printf("%d",b);
	return 0;
}

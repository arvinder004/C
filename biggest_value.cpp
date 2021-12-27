//program to find biggest value among 3 input numbers.

#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER 3 NUMBER TO FIND BIGGEST VALUE\n:");
	scanf("%d,%d,%d",a,b,c);
	if (a>b && a>c){
		printf("%d is bigger than %d and %d",a,b,c);
	}
	
	else if (b>a && b>c){
		printf("%d is bigger than %d and %d",b,a,c);
	}
	
	else{
		printf("%d is bigger than %d and %d",c,a,b);
	}
}

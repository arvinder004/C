//program to find biggest value among 3 input numbers.

#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER 3 NUMBER TO FIND BIGGEST VALUE\n:");    //asking input as three numbers 
	scanf("%d,%d,%d",a,b,c);
	if (a>b && a>c){
		printf("%d is bigger than %d and %d",a,b,c);  //checks first number with other 2
	}
	
	else if (b>a && b>c){
		printf("%d is bigger than %d and %d",b,a,c);  //checks second number with other 2
	}
	
	else{
		printf("%d is bigger than %d and %d",c,a,b);  //checks third number with other 2
	}
}

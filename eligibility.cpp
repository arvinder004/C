// PROGRAM TO CHECK ELIGIBILITY TO VOTE
#include<stdio.h>
int main(){
	int age;
	printf("ENTER YOUR AGE:")
	scanf("%d",&age);
	
	if( age>=18){
		printf("you can vote");
	}
 	else{
 		printf("you cannont vote");
	 }
	 return 0;
}

///printing an array

#include<stdio.h>
int main(){

	int arr[50],n;             //assinging max 50 values to the array
	printf("entr the number of elements less than 50\n");            //taking input from user for number of values
	scanf("%d",&n);
	printf("enter your elements\n");         //taking input from user for values
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("your array is {");
	for(int i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	printf("}");
	return 0;
}

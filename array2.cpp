///printing an array in reverse

#include<stdio.h>
int main(){

	int arr[50],n;
	printf("enter the number of elements less than 50\n");
	scanf("%d",&n);
	printf("enter your elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("your array is {");
	for(int i=n-1;i>=0;i--){
		printf(" %d ",arr[i]);
	}
	printf("}")
	return 0;
}

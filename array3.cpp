//sum of array

#include<stdio.h>
int main(){

	int arr[50],n,sum=0;
	printf("entr the number of elements less than 50\n");
	scanf("%d",&n);
	printf("enter your elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("your array is\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("sum is %d",sum);
	return 0;
}

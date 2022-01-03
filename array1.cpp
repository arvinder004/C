//printing an array
#include<stdio.h>
int main(){

	int arr[50],n;
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
	return 0;
}

//matrix addition

#include<stdio.h>
int main(){
	int arr1[2][2] = {{1,2},{3,4}},arr2[2][2] = {{5,6},{7,8}},arr3[2][2] = {{0,0},{0,0}};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}

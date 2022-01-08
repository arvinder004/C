//matrix addition

#include<stdio.h>
int main(){
	int arr1[2][2] = {{1,2},{3,4}},arr2[2][2] = {{5,6},{7,8}},arr3[2][2] = {{0,0},{0,0}};
	for(int i=0;i<2;i++){           //rows
		for(int j=0;j<2;j++){             //coloumns
			arr3[i][j]=arr1[i][j]+arr2[i][j];      //adding arr1 and arr2,storing value in arr3
			printf("%d ",arr3[i][j]);    //printing final matrix
		}
		printf("\n");
	}
}

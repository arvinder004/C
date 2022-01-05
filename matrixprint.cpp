// printing an array in form of matrix

#include<stdio.h>
int main(){
	int arr[4][4] = {{1,2,3,0},{4,5,6,0},{7,8,9,0}};
	for(int i=0;i<=3;i++){             //rows
		for(int j=0;j<=3;j++){          //columns
			printf("%d ",arr[i][j]);
		}
		printf("\n");
}
}

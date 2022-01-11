//static program to print an array in reverse order

#include<stdio.h>
int main(){
	int arra[]={1,2,3,4,5};
	 for (int i = 4 ; i >= 0; i--) {     
        printf("%d ", arra[i]);     
    }     
    return 0;    
}

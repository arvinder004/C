//area of rectangle

#include<stdio.h>
int area(int x,int y);
main()
{
int a,b;
printf("enter length and breadth of rectangle to find area \n");   //taking input from user
 
scanf("%d %d",&a,&b); 
area(a,b);       //function call
//printf("%d",a);
}

int area(int x,int y)  //defining a function 
{  
x*=y;
printf("%d",x);

}

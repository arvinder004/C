

#include<stdio.h>
int area(int x,int y);
main()
{
int a,b;
printf("enter length and breadth of rectangle to find area \n");
scanf("%d %d",&a,&b);
area(a,b);
//printf("%d",a);
}

int area(int x,int y)
{ 
x*=y;
printf("%d",x);

}

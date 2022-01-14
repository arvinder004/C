//creating a function

#include<stdio.h>
void add();
main()
{
	add();
}

void add()
{ int a,b;
printf("enter two values to add \n");
scanf("%d %d",&a,&b);
a+=b;
printf("%d",a);
}

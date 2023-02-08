//add,sub,mul,div//
#include<stdio.h>
#include<conio.h>
int main()
{
int x,n;	
int op;
printf("addition\n 2 subcraction\n 3 multiplecation\n 4 division\n");
printf("enter the values of x&n:");
scanf("%d%d",&x,&n);
switch(op)
{
case 1:
printf("sum of %d and %d is:%d",x,n,x+n);
break;
case 2:
printf("difference of %d and %d is:%d",x,n,x-n);
break;
case 3:
printf("multiplication of %d and %d is:%d",x,n,x*n);
break;
case 4:
printf("division of %d and %d is:%d",x,n,x/n);
break;
default:
printf("enter your correct choice");
break;	
}
return 0;
getch;
}

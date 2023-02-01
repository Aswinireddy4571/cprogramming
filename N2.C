#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("\n enter the year");
scanf("%d",&a);
if(a%4==0)
printf("is a leap year");
else
printf("not a leap year");
getch();
return 0;	
}

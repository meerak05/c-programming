#include<stdio.h>
int main()
{
int a,b,c=0,i;
printf("enter the value");
scanf("%d",&a);
printf("enter the value");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
	c=c+a;
}
printf("%d",c);
return 0;
}

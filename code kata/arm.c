#include<stdio.h>
int main()
{
int t,n,a;
int sum=0;
scanf("%d",&a);
t=a;
while(a>0)
{
	n=a%10;
	a=a/10;
	sum=sum+(n*n*n);
}
if(t==sum)
	printf("yes");
else
	printf("no");
return 0;
}

#include<stdio.h>
int main()
{
int t,n,a;
int sum=o;
scanf("%d",&a);
t=a;
while(a>0)
{
	n=a%10;
	a=a/10;
	sum=sum*10+n;
}
if(t==sum)
	printf("palindrome");
else
	printf("not a palindrome");
return 0;
}

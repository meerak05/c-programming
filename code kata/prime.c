#include<stdio.h>
int main();
{
int n,a,count=0;
scanf("%d",&a);
for(n=2;n<a;n++)
{
	if(a%n==0)
		count++;
}
if(count==0)
	printf("yes");
else
	printf("no");
return 0;
}

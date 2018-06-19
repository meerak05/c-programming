#include<stdio.h>
int main()
{
	char z;
	scanf("%c",&z);
	if(z>='a'&& z<='z'||z>='A' && z<='Z')
	{
		printf("alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	return 0;
}

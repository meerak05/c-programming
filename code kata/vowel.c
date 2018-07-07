#include<stdio.h>
int main()
{
	char z;
	scanf("%c",&z);
	if(isalpha(z))
	{
	if(z=='a'||z=='A'||z=='e'||z=='E'||z=='i'||z=='I'||z=='o'||z=='O'||z=='u'||z=='U')
	{
		printf("Vowels");
	}
	else
	{
		printf("Consonant");
	}
	}
	else
		printf("invalid")
	return 0;
}

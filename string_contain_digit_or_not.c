#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%s",str);
	int i,c=0;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("Contains %d digit",c);
	}
	else
	{
		printf("Doesn't contain digit");
	}
}
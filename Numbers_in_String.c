#include<stdio.h>
int main()
{
	int i,sum=0,x;
	char str[1000];
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			x=str[i]-48;
			sum+=x;
		}
	}
	printf("%d",sum);
}
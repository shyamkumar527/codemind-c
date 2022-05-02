#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^
]s",str);
	int i,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		printf("%c",str[i]);
	}
}
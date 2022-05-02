#include<stdio.h>
int main()
{
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<(a-1);j++)
		{
			printf("%d",j);
		}
		for(k=(a-3);k>0;k--)
		{
			printf("%d",k);
		}
		printf("
");
	}
}
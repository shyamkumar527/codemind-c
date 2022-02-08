#include<stdio.h>
int main()
{
	int n,pro,sum=0,r;
	scanf("%d",&n);
	pro=n*n;
	while(pro>0)
	{
		r=pro%10;
		sum+=r;
		pro=pro/10;
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}
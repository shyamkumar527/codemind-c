#include<stdio.h>
int main()
{
	int n,r,rev=0;
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
}
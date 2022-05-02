#include<stdio.h>
int main()
{
	int n,sum=0,rem=1,rev=1,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("%d",sum);
}
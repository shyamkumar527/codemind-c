#include<stdio.h>
int main()
{
	long long a,r,count=0;
	scanf("%lli",&a);
	while(a>0)
	{
		r=a%10;
		a=a/10;
		count++;
	}
	if(count==10 && r!=0)
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}
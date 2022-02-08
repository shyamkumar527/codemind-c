#include<stdio.h>
#include<math.h>
int main()
{
	long long num,a;
	float x;
	scanf("%lli",&num);
	x=sqrt((double)num);
	a=x;
	
	if(a==x)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
#include<stdio.h>
int main()
{
	int a,b,x,y,gcd,lcm=1;
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
		gcd=a;
	}
	lcm=(x*y)/gcd;
	printf("%d",lcm);
}
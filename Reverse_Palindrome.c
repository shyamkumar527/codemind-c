#include<stdio.h>
int palindrome(int a)
{
    int r,rev=0,rev1=0,i,ans,dup;
    i=a;
    while(a>0)
	{
		r=a%10;
		rev=(rev*10)+r;
		a=a/10;
	}
	ans=i+rev;
	dup=ans;
	while(ans>0)
	{
		r=ans%10;
		rev1=(rev1*10)+r;
		ans=ans/10;	
	}
	if(dup==rev1)
	{
		return rev1;
	}
	else
	{
		palindrome(dup);
	}
}

int main()
{
    int x,total,i;
    scanf("%d",&x);
    total=palindrome(x);
    printf("%d",total);
}
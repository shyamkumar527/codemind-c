#include<stdio.h>
int palindrome(int x)
{
    int rev=0,r;
    while(x>0)
	{
		r=x%10;
		rev=(rev*10)+r;
		x=x/10;
	}
	return rev;
}

int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++)
    {
        if(i==palindrome(i))
        {
            printf("%d ",i);
        }
    }
}
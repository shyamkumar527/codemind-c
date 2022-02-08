#include<stdio.h>
int main()
{
	int n,x,r,count=0,i=0,j,ans=0;
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	int arr[count];
	while(x>0)
	{
		r=x%10;
		arr[i]=r;
		x=x/10;
		i++;
	}
	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				printf("Not Unique Number");
				ans++;
				break;
			}
		}
		if(ans>0)
		{
			break;
		}
	}
	if(ans==0)
	{
		printf("Unique Number");
	}
}
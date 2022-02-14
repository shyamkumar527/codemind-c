#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n*2];
	for(i=0;i<n*2;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n*2;i+=2)
	{
		int j=arr[i],count=0,r;
		for(j;j<=arr[i+1];j++)
		{
			r=j%10;
			if(r==2 || r==3 || r==9)
			{
				count++;
			}
		}
		printf("%d
",count);
	}
}
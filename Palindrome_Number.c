#include<stdio.h>
int main()
{
	int size,i;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		int x,a,sum=0;
		x=arr[i];
		while(x>0)
		{
			a=x%10;
			sum=(sum*10)+a;
			x=x/10;	
		}
		if(sum==arr[i])
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
		printf("
");
	}
}
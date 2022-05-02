#include<stdio.h>
int main()
{
	int i,count=0,j,a;
	char str[100];
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		count=0;
		scanf("%s",str);
		for(i=0;str[i]!=NULL;i++)
		{
			if(str[i]>='0' && str[i]<='9')
			{
				count++;
			}
		}
		if(count>=1)
		{
			printf("Yes
");
		}
		else
		{
			printf("No
");
		}
	}
}
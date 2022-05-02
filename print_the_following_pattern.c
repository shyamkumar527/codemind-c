#include<stdio.h>
int main()
{
	int i,j,r;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%c ",'A'+i);
		}
		printf("
");
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x=n-(i-1);
        for(j=1;j<=n;j++)
        {
            if(j==i || j==x)
            {
            	printf("x");
			}
			else
			{
				printf("0");
			}
        }
        printf("
");
    }
}
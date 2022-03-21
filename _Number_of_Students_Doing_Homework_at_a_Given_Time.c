#include<stdio.h>
int main()
{
    int n,m,i,k,count=0;
    scanf("%d",&m);
    int arr[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if((arr[i]<=k && arr1[i]>=k))
        {
            count++;
        }
    }
    printf("%d",count);
}
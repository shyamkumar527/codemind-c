#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                count++;
            }
        }
        printf("%d ",count);
    }
}
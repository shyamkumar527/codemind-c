#include<stdio.h>
int main()
{
    int n,i,j,ans=1,k=0,one=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int temp;
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            k=1;
            one=i;
            break;
        }
    }
    if(k==0)
    {
        printf("1");
    }
    else
    {
        int res=1,out=0;
        for(i=one;i<n;i++)
        {
            if(arr[i]!=res)
            {
                printf("%d",res);
                out=1;
                break;
            }
            else
            {
                res++;
            }
        }
        if(out==0)
        {
            printf("%d",res);
        }
    }
}
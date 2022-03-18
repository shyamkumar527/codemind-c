#include<stdio.h>
int main()
{
    int n,ans=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        int temp,r=0,c=0;
        scanf("%d",&arr[i]);
        temp=arr[i];
        while(temp)
        {
            r=temp%10;
            temp/=10;
            c++;
        }
        if(c%2==0)
        {
            ans++;
        }
    }
    printf("%d",ans);
}
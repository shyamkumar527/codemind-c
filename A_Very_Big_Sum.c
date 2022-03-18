#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lli",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lli",&arr[i]);
        sum+=arr[i];
    }
    printf("%lli",sum);
}
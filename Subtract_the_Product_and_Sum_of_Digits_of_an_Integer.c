#include<stdio.h>
int main()
{
    int a,r,pro=1,sum=0,ans;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        pro*=r;
        sum+=r;
        a=a/10;
    }
    ans=pro-sum;
    printf("%d",ans);
}
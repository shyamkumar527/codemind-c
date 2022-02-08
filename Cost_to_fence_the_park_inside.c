#include<stdio.h>
int main()
{
    long long l,b,w,c,ar,total;
    scanf("%lli%lli%lli%lli",&l,&b,&w,&c);
    ar=((l*b)-(l-(w*2))*(b-(w*2)));
    total=ar*c;
    if(l<=(w*2) || b<=(w*2))
    {
        printf("Impossible");
    }
    else
    {
        if(ar>0)
        {
            printf("%lli",total);
        }
        else
        {
            printf("Impossible");
        }
    }
}
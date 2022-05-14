#include<stdio.h>
int main()
{
    int i,a=0,count=0,min=10000;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            a=1;
            if(min>count)
            {
                min=count;
            }
        }
        else
        {
            count++;
        }
    }
    if(a==0)
    {
        min=count;
    }
    printf("%d",min);
}
#include<stdio.h>
int main()
{
    int i,count=0;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            printf("%d ",count);
            count=0;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
}
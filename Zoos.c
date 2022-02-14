#include<stdio.h>
int main()
{
    char str[30];
    scanf("%s", str);
    int x=0,y=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            x++;
        }
        else if(str[i]=='o')
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
#include<stdio.h>
#include <stdlib.h>
int main(){
    char s[1000],t[1000];
    scanf("%s", s);
    scanf("%s", t);
    long x=atoi(s);
    long y=atoi(t);
    long ans=x*y;
    printf("%lli",ans);
}
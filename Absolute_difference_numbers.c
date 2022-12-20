#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,x,l,i,p=0,q=0,ans=0;
    scanf("%d%d",&n,&x);
    char s[1000],s1[1000],s2[1000];
    sprintf(s,"%d",n);
    l=strlen(s);
    for(i=0;i<x;i++){
        s1[p++]=s[i];
    }
    for(i=l-x;i<l;i++){
        s2[q++]=s[i];
    }
    ans=abs(atoi(s1)-atoi(s2));
    printf("%d",ans);
}
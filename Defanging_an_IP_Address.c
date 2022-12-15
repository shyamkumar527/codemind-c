#include<stdio.h>
int main(){
    char s[10000],t[10000];
    scanf("%[^/n]s", s);
    int i,p=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]=='.'){
            t[p++]='[';
            t[p++]='.';
            t[p++]=']';
        }
        else{
            t[p++]=s[i];
        }
    }
    printf("%s",t);
}
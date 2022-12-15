#include<stdio.h>
int main(){
    int k=0,dig=65;
    char s[10000],t[10000],p[10000]="";
    scanf("%s", s);
    scanf("%s", t);
    for(int i=0;s[i]!=NULL;i++){
        p[k++]=s[i];
    }
    for(int i=0;t[i]!=NULL;i++){
        p[k++]=t[i];
    }
    for(int i=0;i<70;i++){
        for(int j=0;j<k;j++){
            if((int)(p[j])==dig){
                printf("%c",p[j]);
            }
        }
        dig+=1;
    }
}
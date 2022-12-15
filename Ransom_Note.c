#include<stdio.h>
int main(){
    char s[10000],t[10000];
    scanf("%s", s);
    scanf("%s", t);
    int a=1,i;
    for(i=0;s[i]!=NULL;i++){
        int c=0,x=0;
        for(int j=0;s[j]!=NULL;j++){
            if(s[i]==s[j]){
                c+=1;
            }
        }
        for(int j=0;j<t[j]!=NULL;j++){
            if(s[i]==t[j]){
                x+=1;
            }
        }
        if(c>x){
            a=0;
            printf("False");
            break;
        }
    }
    if(a==1){
        printf("True");
    }
}
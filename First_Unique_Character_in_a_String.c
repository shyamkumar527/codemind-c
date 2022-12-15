#include<stdio.h>
int main(){
    char s[10000];
    scanf("%s", s);
    int a=0,i;
    for(i=0;s[i]!=NULL;i++){
        int c=0;
        for(int j=0;s[j]!=NULL;j++){
            if(s[i]==s[j]){
                c+=1;
            }
        }
        if(c==1){
            a=1;
            printf("%d",i);
            break;
        }
    }
    if(a==0){
        printf("-1");
    }
}
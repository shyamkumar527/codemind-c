#include<stdio.h>
int main(){
    int n,i,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        ans=ans*10+x;
    }
    ans+=1;
    char str[10];
    sprintf(str, "%d", ans);
    for(i=0;str[i]!=NULL;i++){
        printf("%c ", str[i]);
    }
}
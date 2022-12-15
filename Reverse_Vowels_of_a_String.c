#include<stdio.h>
#include <stdlib.h>
int main(){
    char s[1000],f[1000]="",t[10000]="",v[11]="aeiouAEIOU",ans[1000]="";
    scanf("%s", s);
    int ind=0,p=0,q=0,w;
    for(int i=0;s[i]!=NULL;i++){
        int c=0;
        for(int j=0;j<10;j++){
            if(s[i]==v[j]){
                c=1;
                break;
            }
        }
        if(c==1){
            f[p++]='#';
            t[q++]=s[i];
            ind+=1;
        }
        else{
            f[p++]=s[i];
        }
    }
    for(int i=0;f[i]!=NULL;i++){
        if(f[i]=='#'){
            ans[w++]=t[ind-1];
            ind-=1;
        }
        else{
            ans[w++]=f[i];
        }
    }
    printf("%s",ans);
}
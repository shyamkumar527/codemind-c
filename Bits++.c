#include<stdio.h>
#include<string.h>
int main(){
    int n,i,num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char s[1000];
        scanf("%s", s);
        int j,l=strlen(s);
        for(j=0;j<l;j+=2){
            if(s[j]=='+'){
                num+=1;
            }
            else if(s[j]=='-'){
                num-=1;
            }
        }
    }
    printf("%d",num);
}
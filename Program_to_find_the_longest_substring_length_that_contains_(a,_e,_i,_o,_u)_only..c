#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[1000],v[10];
    int ans=0,m=0;
    scanf("%s", s);
    v[0]='a';
    v[1]='e';
    v[2]='i';
    v[3]='o';
    v[4]='u';
    for(int i=0;i<strlen(s);i++){
        int c=0;
        for(int j=0;j<5;j++){
            if(s[i]==v[j]){
                c=1;
                break;
            }
        }
        if(c==1){
            m+=1;
        }
        else{
            if(m>ans){
                ans=m;
            }
            m=0;
        }
    }
    if(m>ans){
        ans=m;
    }
    printf("%d",ans);
}
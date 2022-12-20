#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[1000],res[10000];
    int x=0,a=0,c=0;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        x=s[i]-'0';
        if(x%2!=0){
            a=pow(x,2);
            char s1[1000];
            sprintf(s1,"%d",a);
            for(int j=0;j<strlen(s1);j++){
                res[c++]=s1[j];
            }
        }
    }
    printf("%s",res);
}
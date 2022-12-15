#include<stdio.h>
int main(){
    int i,j,c=0,ma=0;
    char s[10000],v[6]="aeiou";
    scanf("%s", s);
    for(i=0;s[i]!=NULL;i++){
        int n=0;
        for(j=0;j<5;j++){
            if(s[i]==v[j]){
                c+=1;
                n=1;
                break;
            }
        }
        if(n==0){
            if(c>ma){
                ma=c;
            }
            c=0;
        }
    }
    if(c>ma){
        ma=c;
    }
    printf("%d",ma);
}
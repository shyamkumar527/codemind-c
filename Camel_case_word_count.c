#include<stdio.h>
int main(){
    int c=1,i;
    char s[10000];
    scanf("%s", s);
    for(i=1;i<s[i]!=NULL;i++){
        if(s[i]>= 'A' && s[i] <= 'Z'){
            c+=1;
        }
    }
    printf("%d",c);
}
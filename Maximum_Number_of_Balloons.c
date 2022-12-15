#include<stdio.h>
int main(){
    char s[10000];
    scanf("%s", s);
    int c=0,b=0,a=0,l=0,o=0,n=0,i;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]=='b'){
            b+=1;
        }
        else if(s[i]=='a'){
            a+=1;
        }
        else if(s[i]=='l'){
            l+=1;
        }
        else if(s[i]=='o'){
            o+=1;
        }
        else if(s[i]=='n'){
             n+=1;
        }
    }
    while(1==1){
        if(b<1 || a<1 || l<2 || o<2 || n<1){
            break;
        }
        else{
            c+=1;
            b-=1;
            a-=1;
            l-=2;
            o-=2;
            n-=1;
        }
    }
    printf("%d",c);
}
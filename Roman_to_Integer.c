#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int i,ans=0;
    scanf("%s", s);
    for(i=0;i<strlen(s);i++){
        int p1=0,p2=0;
        char x=s[i];
        if(x=='I'){
            p1=1;
        }
        else if(x=='V'){
            p1=5;
        }
        else if(x=='X'){
            p1=10;
        }
        else if(x=='L'){
            p1=50;
        }
        else if(x=='C'){
            p1=100;
        }
        else if(x=='D'){
            p1=500;
        }
        else if(x=='M'){
            p1=1000;
        }
        if(i+1<strlen(s)){
            x=s[i+1];
            if(x=='I'){
                p2=1;
            }
            else if(x=='V'){
                p2=5;
            }
            else if(x=='X'){
                p2=10;
            }
            else if(x=='L'){
                p2=50;
            }
            else if(x=='C'){
                p2=100;
            }
            else if(x=='D'){
                p2=500;
            }
            else if(x=='M'){
                p2=1000;
            }
            if(p1>=p2){
                ans+=p1;
            }
            else{
                ans+=p2-p1;
                i++;
            }
        }
        else{
            ans+=p1;
        }
    }
    printf("%d",ans);
}
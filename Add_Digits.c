#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n;
    while(1){
        int r=0,sum=0;
        if(n<10){
            printf("%d",x);
            break;
        }
        else{
            while (1){
                r=x%10;
                x=x/10;
                sum+=r;
                if(x==0){
                    x=sum;
                    n=sum;
                    break;
                }
            }
        }
    }
}
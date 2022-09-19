#include<stdio.h>
int main(){
    int n,r,s=0,p=1;
    scanf("%d",&n);
    while(n){
        r=n%10;
        s+=r;
        p*=r;
        n/=10;
    }
    if(s==p){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}
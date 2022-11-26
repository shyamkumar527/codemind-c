#include<stdio.h>
int palin(int n){
    int rev=0,r,x;
    x=n;
    while(x!=0){
        r=x%10;
        rev=(rev*10)+r;
        x/=10;
    }
    if(rev==n){
        return 1;
    }
    return 0;
}
int main(){
    int n,d=1,a=0;
    scanf("%d",&n);
    while(1){
        if(palin(n-d)){
            a=1;
            printf("%d ",n-d);
        }
        if(palin(n+d)){
            a=1;
            printf("%d ",n+d);
        }
        if(a==1){
            break;
        }
        else{
            d+=1;
        }
    }
}
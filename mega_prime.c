#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            c+=1;
            break;
        }
    }
    if(c==0){
        int d=0,p=0,r;
        while(n){
            r=n%10;
            n=n/10;
            d+=1;
            if(r==2 || r==3 || r==5 || r==7){
                p+=1;
            }
        }
        if(p==d){
            printf("Mega Prime");
        }
        else{
            printf("Not Mega Prime");
        }
    }
    else{
        printf("Not Mega Prime");
    }
}
#include<stdio.h>
int prime(int n){
    int i;
    if(n<2){
        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int n,x,y;
        scanf("%d",&n);
        x=n;
        y=n;
        while(1){
            if(prime(x)){
                printf("%d",x);
                break;
            }
            if(prime(y)){
                printf("%d",y);
                break;
            }
            x-=1;
            y+=1;
        }
        printf("
");
    }
}
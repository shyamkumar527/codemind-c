#include<stdio.h>
int main(){
    int n,a=0,b=1,c=0,t=2;
    scanf("%d",&n);
    int l[1000];
    l[0]=0;
    l[1]=1;
    for(int i=0;i<n;i++){
        c=a+b;
        l[t]=c;
        t+=1;
        a=b;
        b=c;
    }
    int low=0,high=0;
    for(int i=0;i<n;i++){
        if(l[i]<n){
            low=l[i];
        }
        if(l[i]>n){
            high=l[i];
            break;
        }
    }
    if((n-low)==(high-n)){
        printf("%d %d",low,high);
    }
    else if((n-low)<(high-n)){
        printf("%d",low);
    }
    else{
        printf("%d",high);
    }
}
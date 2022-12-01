#include<stdio.h>
int main(){
    int n,i,t,f=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(t==arr[i]){
            f=1;
            break;
        }
    }
    if(f==0){
        printf("-1 -1");
    }
    else{
        int i1,i2;
        for(i=0;i<n;i++){
            if(t==arr[i]){
                i1=i;
                break;
            }
        }
        for(i=n-1;i>-1;i--){
            if(t==arr[i]){
                i2=i;
                break;
            }
        }
        printf("%d %d",i1,i2);
    }
}
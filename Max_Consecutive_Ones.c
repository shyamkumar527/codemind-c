#include<stdio.h>
int main(){
    int n,i,c=0,ma=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            c+=1;
        }
        else{
            if(c>ma){
                ma=c;
            }
            c=0;
        }
    }
    if(c>ma){
        ma=c;
    }
    printf("%d",ma);
}
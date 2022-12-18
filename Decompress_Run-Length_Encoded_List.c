#include<stdio.h>
int main(){
    int n,i,j,k=0;
    scanf("%d",&n);
    int arr[n],brr[1000];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2){
        int t=arr[i];
        for(j=0;j<t;j++){
            brr[k++]=arr[i+1];
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",brr[i]);
    }
}
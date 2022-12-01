#include<stdio.h>
int main(){
    int n,i,t,ind=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(arr[i]==t){
            ind=i;
            break;
        }
    }
    printf("%d",ind);
}
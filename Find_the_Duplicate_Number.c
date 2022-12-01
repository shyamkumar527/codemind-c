#include<stdio.h>
int main(){
    int n,i,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int ans=0;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                printf("%d",arr[i]);
                ans=1;
                break;
            }
        }
        if(ans==1){
            break;
        }
    }
}
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int ans=0,c=0;
        for(int j=i+1;j<n;j++){
            ans+=1;
            if(arr[i]<arr[j]){
                printf("%d ",ans);
                c=1;
                break;
            }
        }
        if(c==0){
            printf("0 ");
        }
    }
}
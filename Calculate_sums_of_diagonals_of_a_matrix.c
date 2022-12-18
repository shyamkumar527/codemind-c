#include<stdio.h>
int main(){
    int n,i,j,ans=0;
    scanf("%d",&n);
    int a=n-1;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                ans+=arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        ans+=arr[i][a];
        a-=1;
    }
    if(n%2==1){
        int t=n/2;
        ans-=arr[t][t];
    }
    printf("%d",ans);
}
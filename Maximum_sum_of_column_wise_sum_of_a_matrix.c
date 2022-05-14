#include<stdio.h>
int main(){
    int a,b,i,j,ans=-100;
    scanf("%d %d",&a,&b);
    int arr[a][b],x=a-1;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<b;i++){
        int sum=0;
        for(j=0;j<a;j++){
            sum+=arr[j][i];
        }
        if(sum>ans){
            ans=sum;
        }
    }
    printf("%d",ans);
}
#include<stdio.h>
int main(){
    int a,b,i,j,ans=0;
    scanf("%d %d",&a,&b);
    int arr[a][b],x=a-1;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++){
        int sum=0;
        for(j=0;j<b;j++){
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
}
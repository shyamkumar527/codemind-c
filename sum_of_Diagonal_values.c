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
        for(j=0;j<b;j++){
            if(i==j){
                ans+=arr[i][j];
            }
        }
    }
    for(i=0,j=b-1;i<a,j>=0;i++,j--){
        if(i==j){
            continue;
        }
        else{
            ans+=arr[i][j];
        }
    }
    printf("%d",ans);
}
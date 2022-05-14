#include<stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d",&a);
    int arr1[a][a],arr2[a][a],res[a][a];
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(arr1[i][j]>=arr2[i][j]){
                res[i][j]=arr1[i][j]-arr2[i][j];
            }
            else{
                res[i][j]=arr2[i][j]-arr1[i][j];
            }
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j==a-1){
                printf("%d",res[i][j]);
            }
            else{
                printf("%d ",res[i][j]);
            }
        }
        printf("
");
    }
}
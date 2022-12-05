#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++){
        int m=-10000;
        for(j=0;j<r;j++){
            if(arr[j][i]>m){
                m=arr[j][i];
            }
        }
        printf("%d
",m);
    }
}
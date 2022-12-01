#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int ne[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i==n-1){
            ne[i]=-1;
        }
        else{
            int ma=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>ma){
                    ma=arr[j];
                }
            }
            ne[i]=ma;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",ne[i]);
    }
}
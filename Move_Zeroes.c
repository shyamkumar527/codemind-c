#include<stdio.h>
int main(){
    int n,i,c=0,j=0;
    scanf("%d",&n);
    int arr[n];
    int ne[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]!=0){
            ne[j++]=arr[i];
        }
        else{
            c+=1;
        }
    }
    for(i=0;i<c;i++){
        ne[j++]=0;
    }
    for(i=0;i<n;i++){
        printf("%d ",ne[i]);
    }
}
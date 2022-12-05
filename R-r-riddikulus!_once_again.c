#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int lis[a];
    for(i=0;i<a;i++){
        int ind=(i-b);
        if(ind<0){
            ind+=a;
        }
        lis[ind]=arr[i];
    }
    for(i=0;i<a;i++){
        printf("%d ",lis[i]);
    }
}
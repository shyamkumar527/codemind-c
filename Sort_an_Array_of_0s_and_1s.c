#include<stdio.h>
int main(){
    int n,z=0,o=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            o+=1;
        }
        else{
            z+=1;
        }
    }
    for(int i=0;i<z;i++){
        printf("0 ");
    }
    for(int i=0;i<o;i++){
        printf("1 ");
    }
}
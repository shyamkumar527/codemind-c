#include<stdio.h>
int main(){
    int n,i,j;
    float val=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int ele=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                ele+=1;
            }
        }
        if(ele==arr[i]){
            val+=arr[i];
            c+=1;
            arr[i]=-1;
        }
    }
    if(c==0){
        printf("-1");
    }
    else{
        float x=val/c;
        printf("%.2f",x);
    }
}
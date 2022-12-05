#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        if(n==1){
            printf("1");
        }
        else{
            int a=1;
            for(int j=1;j<n;j++){
                if(arr[j-1]>arr[j]){
                    a+=1;
                }
            }
            printf("%d",a);
        }
        printf("
");
    }
}
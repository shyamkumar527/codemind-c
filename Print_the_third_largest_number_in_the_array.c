#include<stdio.h>
int main()
{
    int n,i,j,fin=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int temp=0;
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
            if(count==3){
                printf("%d",arr[i]);
                fin=1;
                break;
            }
        }
    }
    if(fin==0){
        printf("It is not possible");
    }
}
#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,j;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n-1;j++){
            scanf("%d",&arr[j]);
        }
        for(j=1;j<=n;j++){
            int c=0;
            for(int k=0;k<n;k++){
                if(j==arr[k]){
                    c+=1;
                    break;
                }
            }
            if(c==0){
                printf("%d
",j);
                break;
            }
        }
    }
}
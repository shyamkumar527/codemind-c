#include<stdio.h>
int main(){
    int t,i,loop=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        loop+=1;
        int n,c=0,j;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(j=0;j<n;j++){
            int ans1=-1,ans2=-1;
            if(j==0){
                if(arr[j]>arr[j+1]){
                    c+=1;
                }
            }
            else{
                for(int k=0;k<j;k++){
                    if(arr[k]>arr[j]){
                        ans1=1;
                        break;
                    }
                    else if(arr[k]<arr[j]){
                        ans1=0;
                    }
                }
                if(j==(n-1)){
                    if(ans1==0)
                        c+=1;
                }
                else{
                    if(arr[j]>arr[j+1]){
                        ans2=1;
                    }
                    if(ans1==0 && ans2==1){
                        c+=1;
                    }
                }
            }
        }
        printf("Case #");
        printf("%d",loop);
        printf(": ");
        printf("%d
",c);
    }
}
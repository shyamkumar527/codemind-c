#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int x,c=0,ans=0,j=0,r,k,val=100000;
        scanf("%d",&x);
        int arr[10000];
        while(x){
            r=x%10;
            arr[j++]=r;
            x=x/10;
            c+=1;
        }
        for(k=0;k<j;k++){
            if(arr[k]<val){
                val=arr[k];
            }
        }
        for(int p=0;p<c-1;p++){
            val+=1;
            int nu=0;
            for(k=0;k<j;k++){
                if(val==arr[k]){
                    nu+=1;
                }
            }
            if(nu==0){
                ans=1;
                break;
            }
        }
        if(ans==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
        printf("
");
    }
}
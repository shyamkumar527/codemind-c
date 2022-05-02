#include<stdio.h>
#include<math.h>
int main(){
    int s,a,i,arr[s],osum=0,esum=0;
    scanf("%d",&s);
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++){
        if(i%2!=0){
            osum+=arr[i];
        }
        if(i%2==0){
            esum+=arr[i];
        }
    }
    a=abs(esum-osum);
    printf("%d",a);
}
#include<stdio.h>
int main(){
    char str[1000];
    int arr[5]={0},i,ans=0;
    scanf("%[^
]s", str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]=='a'){
            arr[0]++;
        }
        else if(str[i]=='e'){
            arr[1]++;
        }
        else if(str[i]=='i'){
            arr[2]++;
        }
        else if(str[i]=='o'){
            arr[3]++;
        }
        else if(str[i]=='u'){
            arr[4]++;
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]==0){
            printf("False");
            ans++;
            break;
        }
    }
    if(ans==0){
        printf("True");
    }
}
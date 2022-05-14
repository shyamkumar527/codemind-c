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
    if(arr[0]==0){
        printf("a ");
        ans++;
    }
    if(arr[1]==0){
        printf("e ");
        ans++;
    }
    if(arr[2]==0){
        printf("i ");
        ans++;
    }
    if(arr[3]==0){
        printf("o ");
        ans++;
    }
    if(arr[4]==0){
        printf("u ");
        ans++;
    }
    if(ans==0){
        printf("0");
    }
}
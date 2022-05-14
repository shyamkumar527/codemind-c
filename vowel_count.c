#include<stdio.h>
int main(){
    char str[1000];
    int i,ans=0;
    scanf("%[^
]s", str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]=='a' || str[i]=='A'){
            ans++;
        }
        else if(str[i]=='e' || str[i]=='E'){
            ans++;
        }
        else if(str[i]=='i' || str[i]=='I'){
            ans++;
        }
        else if(str[i]=='o' || str[i]=='O'){
            ans++;
        }
        else if(str[i]=='u' || str[i]=='U'){
            ans++;
        }
    }
    printf("%d",ans);
}
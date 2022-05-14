#include<stdio.h>
int main(){
    char str[1000],c[5];
    int i,ans=0;
    scanf("%[^
]s", str);
    scanf("%s", c);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]==c[0]){
            ans=i;
            break;
        }
    }
    if(ans>0){
        printf("True
");
        printf("%d",ans);
    }
    else{
        printf("False");
    }
}
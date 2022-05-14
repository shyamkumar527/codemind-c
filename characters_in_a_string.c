#include<stdio.h>
int main(){
    char str[1000];
    int i=0,count=0;
    scanf("%[^
]s", str);
    for(i;str[i]!=NULL;i++){
        count++;
    }
    printf("%d",count);
}
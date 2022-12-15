#include<stdio.h>
int main(){
    char a='a';
    char s[10000];
    scanf("%[^
]s", s);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]>a){
            a=s[i];
        }
    }
    printf("%c
",a);
}
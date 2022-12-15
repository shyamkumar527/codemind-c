#include<stdio.h>
int main(){
    int i,j,c=0,ma=0,k=0;
    char s[10000],t[10000],v[6]="aeiou";
    scanf("%[^
]s", s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]!=' '){
            t[k++]=s[i];
        }
        else{
            for(int j=k-1;j>=0;j--){
                printf("%c",t[j]);
            }
            printf(" ");
            k=0;
        }
    }
    for(int j=k-1;j>=0;j--){
        printf("%c",t[j]);
    }
}
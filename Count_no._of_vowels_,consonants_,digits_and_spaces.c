#include<stdio.h>
int main(){
    int v=0,c=0,d=0,w=0;
    char s[10000];
    scanf("%[^
]s", s);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            v+=1;
        }
        else if(s[i]==' '){
            w+=1;
        }
        else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
            d+=1;
        }
        else{
            c+=1;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",w);
}
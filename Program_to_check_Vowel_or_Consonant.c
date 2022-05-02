#include<stdio.h>
int main(){
    char A,E,I,O,U,b;
    scanf("%c",&b);
    if(b=='A' || b=='a' || b=='E' || b=='e' || b=='I' || b=='i' || b=='O' || b=='o' || b=='U' || b=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}
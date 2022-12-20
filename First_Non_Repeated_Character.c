#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int ans=0,n;
        char s[1000];
        scanf("%d",&n);
        scanf("%s", s);
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=0;k<n;k++){
                if(s[j]==s[k]){
                    c++;
                }
                if(c>1){
                    break;
                }
            }
            if(c==1){
                printf("%c
",s[j]);
                ans=1;
                break;
            }
        }
        if(ans==0){
            printf("-1
");
        }
    }
}
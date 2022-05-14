#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	int i,j,up=0,lw=0,len,ans=0;
	scanf("%[^
]s", str);
	len=strlen(str)-1;
	char ch[len+1];
	for(i=0;str[i]!=NULL;i++){
	    if(str[i]>='A' && str[i]<='Z'){
	        str[i]+=32;
	    }
	}
	for(i=0;str[i]!=NULL;i++){
	    ch[len]=str[i];
	    len--;
	}
	for(i=0;str[i]!=NULL;i++){
	    if(str[i]!=ch[i]){
	        ans=1;
	        break;
	    }
	}
	if(ans==0){
	    printf("True");
	}
	else{
	    printf("False");
	}
}
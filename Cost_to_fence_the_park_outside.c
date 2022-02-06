#include<stdio.h>
int main()
{
	int l,b,w,c,ar,ans;
	scanf("%d%d%d%d",&l,&b,&w,&c);
	ar=((l+w*2)*(b+w*2))-(l*b);
	ans=ar*c;
	printf("%d",ans);
}
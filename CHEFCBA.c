#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a*b==c*d || a*c==b*d || a*d==b*c)
	printf("Possible");
	else
	printf("Impossible");
	return 0;
}

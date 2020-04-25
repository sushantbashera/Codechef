#include<stdio.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long long n,m;
		scanf("%lld%lld",&n,&m);
		if(((n&1)==0 && (m&1)==0) || ((m&1)!=0 && (n&1)!=0))
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}

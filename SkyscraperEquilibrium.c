#include<stdio.h>
#include<stdlib.h>
int main()
{
	long t,i;
	scanf("%li",&t);
	
	unsigned long long n,m,ans[100000];
	for(i=0;i<t;++i)
	{
		scanf("%llu %llu",&n,&m);
		if(m>n)
		ans[i]=m-n;
		else
		ans[i]=n-m;
	}
	for(i=0;i<t;++i)
	{
		printf("%llu\n",ans[i]);
	}
	return 0;
}

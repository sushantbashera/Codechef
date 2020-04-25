#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,t,j,k,i,p;
	scanf("%d",&t);
	unsigned long col[5];
	for(i=0;i<t;++i)
	{
		scanf("%d",&n);
		unsigned long x=1,p,q;
		int ans=0;
		for(j=0;j<n;++j)
		{
			scanf("%llu",&q);
			for(p=2;p*p<=x*q;++p)
			{
				if((x*q)%(p*p)==0)
				{
					col[i]=p;
					ans=1;
					break;
				}
			}
			if(ans==1)
			break;
		}
	}
	for(i=0;i<t;++i)
	{
		printf("%llu\n",col[i]);
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,t,j,k,i;
	scanf("%d",&t);
	unsigned long col[5];
	for(i=0;i<t;++i)
	{
		scanf("%d",&n);
		unsigned long x,m,p,xp=1;
		for(j=0;j<n;++j)
		{
			scanf("%llu",&x);
			xp=xp*x;
		}
		for(p=2;p*p<=xp;p++)
		{
			if(xp%(p*p)==0)
			{
				col[i]=p;
				break;
			}
		}
	}
	for(i=0;i<t;++i)
	printf("%llu\n",col[i]);
	return 0;
}

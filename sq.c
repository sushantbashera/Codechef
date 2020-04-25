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
		unsigned long x[n],m,p,ans=0;
		for(j=0;j<n;++j)
		scanf("%llu",&x[i]);
		for(j=0;j<n;j++)
		for(p=2;p<=x[j];p++)
		{
			if(x[j]%(p*p)==0)
			{
				col[i]=p;
				printf("%llu a",p);
				break;
			}
			if(x[j]%p==0)
			{
				for(m=0;m<n;++m)
				{
					if(m==j)
					continue;
					if(x[m]%p==0)
					{
						col[i]=p;
						printf("%llu ab",p);
						ans=1;
						break;
					}
				}
			}
			if(ans==1)
			break;
		}
	}
	for(i=0;i<t;++i)
	printf("%llu\n",col[i]);
	return 0;
}

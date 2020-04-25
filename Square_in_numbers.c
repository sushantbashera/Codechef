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
		unsigned long x=1,p,q,no,a[100000];
		for(j=0;j<n;++j)
		{
			scanf("%llu",&q);
			no=0;
			int ans=0;
			for(p=2;p<=q;p++)
			{
				if(q%(p*p)==0)
				{
					col[i]=p;
					break;
				}
				if(q%p==0)
				{
					for(k=0;k<no;k++)
					{
						if(p==a[k])
						col[i]=p;
						ans=1;
						break;
					}
					if(ans==1)
					break;
					a[no]=p;
					no++;
				}
			}
		}
	}
	for(i=0;i<t;++i)
	{
		printf("%llu\n",col[i]);
	}
	return 0;
}

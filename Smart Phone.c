#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long long i,j;
	long n;
	scanf("%d",&n);
	unsigned long long count,rev,bud[n],max,rev1=0;
	for(i=0;i<n;i++)
	scanf("%llu",&bud[i]);
	max=bud[0];
	for(i=1;i<n;i++)
	max+=bud[i];
	for(i=0;i<n;i++)
	{
		count;
		rev=0;
		for(j=0;j<n;j++)
		{
			if(bud[j]>=bud[i])
			rev=rev+bud[i];
		}
		if(rev>rev1)
		rev1=rev;
	}
	printf("%llu",rev1);
	return 0;
}

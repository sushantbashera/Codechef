#include<stdio.h>
int main()
{
	long n,k,i,j;
	scanf("%li %li",&n,&k);
	int a[n];
	long long rev=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=k)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]+a[j]<k)
				rev++;
			}
		}
	}
	printf("%lld",rev);
}

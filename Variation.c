#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	long k;
	scanf("%d %li",&n,&k);
	long a[n];
	unsigned long long count=0;
	for(i=0;i<n;i++)
	{
		scanf("%li",&a[i]);
		for(j=0;j<i;j++)
		{
			if((a[j]-a[i]>=k) || a[i]-a[j]>=k)
			count++;
		}
	}
	printf("%llu",count);
}

#include<stdio.h>
int main()
{
	long n,i,j;
	scanf("%li",&n);
	int a[n];
	long long rev=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		rev+=(a[j]>=a[i])?(a[j]-a[i]):(a[i]-a[j]);
	}
	printf("%lld",rev);
}

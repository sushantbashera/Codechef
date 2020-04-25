#include<stdio.h>
long mod=786433;

unsigned long long power(long b,long e)
{
	unsigned long long res=1;
	while(e)
	{
    	if(e&1)
        res=(res*b)%mod;
        b=(b*b)%mod;
    	e=e>>1;
	}
	return res;
}
int main()
{
	long n,q,x,i,j;
	scanf("%li",&n);
	long a[n];
	for(i=0;i<=n;i++)
	scanf("%li",&a[i]);
	scanf("%li",&q);
	unsigned long long ans;
	for(i=0;i<q;i++)
	{
		ans=0;
		scanf("%li",&x);
		for(j=0;j<=n;j++)
		{
			ans=ans+a[j]*power(x,j);
			ans%=mod;
		}
		printf("%llu\n",ans);
	}
}

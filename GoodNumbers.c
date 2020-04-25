#include<stdio.h>
#include<stdlib.h>
long sumCalc=0;
int isPrime(long x)
{
	if(x==1)
	return 0;
	long i;
	for(i=2;(i*i)<=x;++i)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
int goodNum(long x)
{
	long sum=1,i,c=0,j,sum1=1;
	if(x==1)
	return 0;
	for(i=2;i<=x;++i)
	{
		if(x%(i*i)==0)
		return 0;
		if(x%i==0)
		{
			sum=sum+i;
			sum1=sum1+i;
		}
	}
	for(i=2;i<=sum;++i)
	{
		if(isPrime(i) && sum%i==0)
		c++;
	}
	sumCalc=sum1;
	return (isPrime(c));
}
int main()
{
	long t,i,j,l,r,sum[100000];
	scanf("%li",&t);
	for(i=0;i<t;++i)
	{
		scanf("%li %li",&l,&r);
		sum[i]=0;
		for(j=l;j<=r;++j)
		{
			if(goodNum(j))
			sum[i]+=sumCalc;
		}
	}
	for(i=0;i<t;++i)
	printf("%li\n",sum[i]);
	return 0;
}

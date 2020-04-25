#include<stdio.h>
#include<stdlib.h>
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
	long sum=1,i,c=0,j;
	if(x==1)
	return 0;
	for(i=2,j=2;j<=x;i++,++j)
	{
		if(x%(i*i)==0)
		return 0;
		else if(x%j==0)
		sum=sum+i;
	}
	for(i=2;i<=sum;++i)
	{
		if(isPrime(i) && sum%i==0)
		c++;
	}
	 return (isPrime(c));
}
long sumCalc(long x)
{
	long s=x+1,i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		s+=i;
	}
	return s;
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
			sum[i]+=sumCalc(j);
		}
	}
	for(i=0;i<t;++i)
	printf("%li\n",sum[i]);
	return 0;
}

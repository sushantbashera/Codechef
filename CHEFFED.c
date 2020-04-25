#include<stdio.h>
#include<stdlib.h>
long sum(long x)
{
	long s=0,s2;
	while(x>0)
	{
		s=s+x%10;
		x=x/10;
	}
	s2=s;
	while(s>0)
	{
		s2=s2+s%10;
		s=s/10;
	}
	return s2;
}
int main()
{
	int ans=0;
	long n,j;
	scanf("%li",&n);
	if(n<1000)
	{
		for(j=1;j<n;j++)
		{	
			if(j+sum(j)==n)
			ans++;
		}
	}
	else
	{
		for(j=n-150;j<n;j++)
		{
			if(j+sum(j)==n)
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}

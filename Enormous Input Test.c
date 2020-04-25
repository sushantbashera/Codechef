#include<stdio.h>
#include<stdlib.h>
int main()
{
	long k,n,i;
	scanf("%li %li",&n,&k);
	long t,ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%li",&t);
		if(t%k==0)
		ans++;
	}
	printf("%li",ans);
	return 0;
}

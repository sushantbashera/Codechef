#include<stdlib.h>
#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long j,n,sum1=0,sum2=0,sum3=0,left,right,ans,k;
		scanf("%li",&n);
		long x[n];
		for(j=0;j<n;j++)
		scanf("%li",&x[j]);
		for(j=0;j<n;j++)
		{
			if(x[j]%2)
			sum1++;
			else
			break;
		}
		for(k=n-1;k>=j;k--)
		{
			if(x[k]%2)
			sum2++;
			else
			break;
		}
		if(k==j)
		sum2=0;
		sum3=k-j+1;
		printf("%li\n",(sum1>sum2)?((sum1>sum3)?sum1:sum3):((sum2>sum3)?sum2:sum3));
	}
	return 0;
}

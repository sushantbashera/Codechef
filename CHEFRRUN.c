#include<stdio.h>
#include<stdlib.h>
int main()
{
	long i,t;
	scanf("%li",&t);
	for(i=0;i<t;i++)
	{
		long n,j,count=0,flag,k,x=1;
		scanf("%li",&n);
		long a[n];
		int b[n];
		for(j=0;j<n;j++)
		scanf("%li",&a[j]);
		for(k=0;k<n;k++)
			b[k]=0;
		for(j=0;j<n;j++)
		{
			flag=j;
			while(b[flag]!=n-1)
			{
				if(b[flag]>0)
				break;
				else
				b[flag]=x;
				flag=(flag+1+a[flag])%n;
			}
			if(flag==j)
			for(k=0;k<n;k++)
			if(b[flag]==x)
			count++;
			x++;
		}
		printf("%li\n",count);
	}
	return 0;
}

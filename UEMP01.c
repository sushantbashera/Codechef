#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,k;
	long n,j;
	scanf("%d",&t);
	long ans;
	
	for(i=0;i<t;i++)
	{
		ans=0;
		scanf("%li %d",&n,&k);
		int x[n],y[n];
		for(j=0;j<n;j++)
		scanf("%d %d",&x[j],&y[j]);
		for(j=0;j<n;j++)
		{
			ans=x[j]*x[j]+y[j]*y[j];
			if(ans<=k*k)
			{
				printf("Available\n");
				break;
			}
		}
		if(j==n)
		printf("Not Available\n");
	}
	return 0;
}

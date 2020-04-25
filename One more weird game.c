#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,t,j,k,ans[100],i,a[1000][1000];
	scanf("%d",&t);
	for(i=0;i<t;++i)
	{
		scanf("%d %d",&n,&m);
		for(j=0;j<n;++j)
		for(k=0;k<m;++k)
		a[j][k]=0;
		ans[i]=0;
		for(j=0;j<n;++j)
		{
			for(k=0;k<m;++k)
			{
				a[j][k]=1;
				if(j+1<n && a[j+1][k]==1)
				ans[i]++;
				if(k+1<m && a[j][k+1]==1)
				ans[i]++;
				if(j-1>=0 && a[j-1][k]==1)
				ans[i]++;
				if(k-1>=0 && a[j][k-1]==1)
				ans[i]++;
			}
		}
	}
	for(i=0;i<t;++i)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}

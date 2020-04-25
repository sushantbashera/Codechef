#include<stdio.h>
#include<stdlib.h>
int main()
{
	long n,q,j,k,i,p,u[1000000],v[1000000],u1[1000000],v1[1000000],l[1000000],l1,m,point;
	long ans=0;
	scanf("%li",&n);
	for(i=0;i<n-1;i++)
	scanf("%li %li",&u[i],&v[i]);
	scanf("%li",&q);
	for(i=0;i<q;i++)
	scanf("%li %li",&u1[i],&v1[i]);
	long prev[n][n];
	for(i=0,m=0;i<q;i++)
	{
		l[i]=0;
		point=u1[i];
		prev[i][m++]=1;
		for(j=0;j<n-1;j++)
		{
			if(point==u[j])
			{
				point=v[j];
				prev[i][m++]=1;
				l[i]++;
				if(point==v1[i])
				break;
			}
			if(point==v[j])
			{
				point=u[j];
				prev[i][m++]=1;
				l[i]++;
				if(point==v1[i])
				break;
			}
		}
	}
	for(j=0;j<n-1;j++)	
	{
			ans=0;
			for(k=0;k<i;k++)
			for(l1=0;l1<l[j];l1++)
			{
				if(prev[k][l1]==prev[i][l1])
				ans++;
			}
			printf("%llu",ans);
	}
	return 0;
}

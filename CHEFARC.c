#include<stdio.h>
int main()
{
	int t,i,n,m,k1,k2,k,j,count;
	scanf("%d",&t);
	long p;
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&n,&m,&k1,&k2);
		int a[n][m],steps[10000],point[n][m];
		for(j=1;j<=n;j++)
		for(k=1;k<=m;k++)
		scanf("%d",&a[j][k]);
		j=1;k=1,p=1;steps[0]=0;count=0;
		if(a[1][2]==0)
		count++;
		if(a[2][1]==0)
		count++;
		while(k1 && k2 && (j!=1 || k!=m) && count)
		{
			steps[p]=0;
			if(k+1<=m && a[j][k+1]==0 && steps[p-1]!=-2 && steps[p]!=2)
			{
				steps[p++]=2;
				k++;
			}
			else if(j-1>=1 && a[j-1][k]==0 && steps[p-1]!=1 && steps[p]!=-1)
			{
				steps[p++]=-1;
				j--;
			}
			else if(j+1<=n && a[j+1][k]==0 && steps[p-1]!=-1 && steps[p]!=1)
			{
				steps[p++]=1;
				j++;
			}
			else if(k-1>=1 && a[j][k-1]==0 && steps[p-1]!=2 && steps[p]!=-2)
			{
				steps[p++]=-2;
				k--;
			}
			else
			{
				a[j][k]=1;
				if(steps[p-1]==1)
				j--;
				else if(steps[p-1]==-1)
				j++;
				else if(steps[p-1]==2)
				k--;
				else if(steps[p-1]==-2)
				k++;
				
				a[j][k]=0;
				p--;
			}
			
			if(j==1 && k==1)
			count--;
		}
		if(!count || (!k1 && !k2))
		p=-1;
		else if((p-1)%(k1+k2))
		p=(p-1)/(k1+k2)+1;
		else
		p=(p-1)/(k1+k2);
		printf("%li\n",p);
	}
}

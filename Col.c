#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,t,j,k,col[100],x,i;
	char a[10][10];
	scanf("%d",&t);
	for(i=0;i<t;++i)
	{
		scanf("%d %d",&n,&m);
		for(j=0;j<n;++j)
		scanf("%s",&a[j]);
		col[i]=0;
		for(j=0;j<m;++j)
		{
			x=0;
			for(k=0;k<n;k++)
			{
				if(a[k][j]=='1')
				x++;
			}
			col[i]=col[i]+x*(x-1)/2;
		}
	}
	for(i=0;i<t;++i)
	{
		printf("%d\n",col[i]);
	}
	return 0;
}

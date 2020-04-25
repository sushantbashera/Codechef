#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,i,j,a[1000],count[1000],x,flag;
	scanf("%d",&t);
	long ans[t];
	for(i=0;i<t;i++)
	{
		flag=0;x=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		count[j]=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
			count[a[j]]++;
		}
		for(j=n;j>=1;j--)
		{
			if(count[j]>=4)
			{
				ans[i]=j*j;
				x=1;
				break;
			}
			else if(count[j]>=2)
			{
				ans[i]=j;
				flag=1;
				break;
			}
		}
		for(j=j-1;j>=1 && flag==1;j--)
		{
			if(count[j]>=2)
			{
				ans[i]=ans[i]*j;
				x=1;
				break;
			}
		}
		if(!x)
		ans[i]=-1;
	}
	for(i=0;i<t;i++)
	printf("%li\n",ans[i]);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,a,b,res[40],x;
	scanf("%d",&t);
	long n,j,ans;
	for(i=0;i<t;i++)
	{
		ans=0;a=0;b=0;
		scanf("%li",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&x);
			ans=ans+x;
			if(x==2)
			a=1;
			if(x==5)
			b=1;
		}
		if(a==0 && b==1 && (ans/n)>=4)
		res[i]=1;
		else
		res[i]=0;
	}
	for(i=0;i<t;i++)
	{
		if(res[i]==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}

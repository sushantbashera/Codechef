#include<stdio.h>
#include<stdlib.h>
void ins_c(long long *a, int n)
{
    int i,j,p,x;
    for(i=0;i<n;++i)
    {
        x=a[i];j=i-1;
        while(j>=0 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
    	a[j+1]=x;
    }       
}
int main()
{
	int t,i,j,n,k,e,p;
	long long m,st[10000],chef,ans[5],a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		chef=0;
		scanf("%d %d %d %li",&n,&k,&e,&m);
		for(j=0;j<10000;j++)
		st[j]=0;
		for(j=0;j<n-1;j++)
		for(k=0;k<e;k++)
		{
			scanf("%llu",&a);
			st[j]=st[j]+a;
		}
		ins_c(st,n-1);
		for(k=0;k<e-1;k++)
		{
			scanf("%llu",&a);
			chef=chef+a;
		}
		if(chef<=st[n-k-1])
		{
			if(st[n-k-1]-chef>=m)
			ans[i]=-1;
			else
			ans[i]=st[n-k-1]-chef+1;
		}
		else
		ans[i]=0;
	}
	for(i=0;i<t;i++)
	{
		if(ans[i]==-1)
		printf("Impossible\n");
		else
		printf("%llu\n",ans[i]);
	}
	return 0;
}

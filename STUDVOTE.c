#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,k,count=0,k1,p;
		scanf("%d %d",&n,&k);
		int a[n],j;
		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		for(j=0;j<n;j++)
		{
			k1=k;
			for(p=0;p<n;p++)
			{
				if(a[p]==j+1)
				k1--;
				if(k1==0 && a[j]!=j+1)
				{
					count++;
					break;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

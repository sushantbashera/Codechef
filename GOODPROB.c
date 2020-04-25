#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	long long count=0,max;
	for(i=0;i<n;i++)
	{
		max=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]>max)
			max=a[j];
			if(k=((a[i]&a[j])==a[j] || (a[i]&a[j])==a[i]))
			count=count+max*k;
		}
	}
	printf("%lld",count);
	return 0;
}

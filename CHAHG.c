#include<stdio.h>
int height(long *h,int n)
{
	long i;
	if(n==1)
	return 1;
	if(n==2 && h[0]==h[1])
	return 0;
	if(h[0]!=h[1])
	return 1;
	for(i=1;i+1<n;i+=2)
	{
		if((h[i]>h[i+1] && h[i]<h[i-1]) || (h[i]<h[i+1] && h[i]>h[i-1]))
		return 0;
	}
	return 1;
}
int main()
{
	long t;
	scanf("%li",&t);
	while(t--)
	{
		long n,i;
		scanf("%li",&n);
		long h[n],m[n],check[10],no=0,t;
		for(i=0;i<n;i++)
		scanf("%li%li",&h[i],&m[i]);
		for(t=0;t<10;t++)
		{
			if(height(h,n)==1)
			check[t]=1;
			else
			check[t]=0;
			for(i=0;i<n;i++)
			h[i]=h[i]+m[i];
		}
		for(t=0;t<10;t++)
		{
			if(check[t]==1)
			{
				no++;
				while(check[t]==1 && t<10)
				t++;
			}
		}
		printf("%li\n",no);
		if(no>0)
		for(t=0;t<10;t++)
		{
			if(check[t]==1)
			{
				printf("%li ",t);
				while(check[t]!=0 && t<10)
				t++;
				if(t==10)
				printf("Inf\n");
				else
				printf("%li\n",t);
			}
		}
	}
	return 0;
}

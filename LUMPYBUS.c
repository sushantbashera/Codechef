#include<stdio.h>
#include<stdlib.h>
int main()
{
	long t,i;
	scanf("%li",&t);
	for(i=0;i<t;i++)
	{
		long n,j,p,q,count=0;
		scanf("%li %li %li",&n,&p,&q);
		long a[n],x,k;
		for(j=0;j<n;j++)
		{
			scanf("%li",&a[j]);
			x=a[j];
			for(k=j-1;k>=0 && a[k]>x;k--)
			a[k+1]=a[k];
			a[k+1]=x;
		}
		
		for(j=0;j<n;j++)
		{
			long no2=0,curr=a[j];
			if(a[j]<=2*q+p)
			{
				no2=curr/2;
				if(no2<=q)
				{
					q=q-no2;
					curr=curr-2*no2;
				}
				else
				{
					curr=curr-2*q;
					q=0;
				}
				if(curr<=p)
				{
					p=p-curr;
					curr=0;
				}
				if(curr==0)
				count++;
				else
				break;
			}
			else
			break;
		}
		printf("%li\n",count);
	}
	return 0;
}

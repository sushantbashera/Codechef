#include<stdio.h>
int main()
{
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		unsigned long long sum=0,j;
		scanf("%d",&n);
		long a[n],b[n],tick[n],avg=0;
		double avg1=0;
		for(j=0;j<n;j++)
		{
			scanf("%li",&b[j]);
			sum+=b[j];
			tick[j]=0;
		}
		for(j=0;j<n;j++)
		{
			scanf("%li",&a[j]);
			sum+=a[j];
		}
		avg=sum/n;
		avg1=(double)sum/(double)n;
		if(avg1!=avg)
		printf("-1\n");
		else
		{
			for(j=0;j<n;j++)
			{
				if(a[j]!=avg)
				{
					if(j-1>=0 && b[j-1]+a[j]==avg1 && tick[j-1]==0)
					{
						tick[j-1]=1;
					}
					else if(j-1>=0 && b[j-1]+b[j]+a[j]==avg1 && tick[j-1]==0 && tick[j]==0)
					{
						tick[j-1]=1;
						tick[j]=1;
					}
					else if(j-1>=0 && j+1<n && b[j-1]+b[j+1]+a[j]==avg1 && tick[j-1]==0  && tick[j+1]==0)
					{
						tick[j+1]=1;
						tick[j-1]=1;
					}
					else if(j-1>=0 && j+1<n && b[j-1]+b[j+1]+b[j]+a[j]==avg1 && tick[j-1]==0  && tick[j+1]==0 && tick[j]==0)
					{
						tick[j+1]=1;
						tick[j-1]=1;
						tick[j]=1;
					}
					else if(b[j]+a[j]==avg1 && tick[j]==0)
					{
						tick[j]=1;
					}
					else if(j+1<n && b[j+1]+b[j]+a[j]==avg1 && tick[j+1]==0  && tick[j]==0)
					{
						tick[j+1]=1;
						tick[j]=1;
					}
					else if(j+1<n && b[j+1]+a[j]==avg1 && tick[j+1]==0)
					{
						tick[j+1]=1;
					}
					else
					{
						printf("-1\n");
						break;
					}
				}
			}
			if(j==n)
			printf("%li\n",avg);
		}
	}
	return 0;
} 

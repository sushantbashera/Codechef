#include<stdio.h>
int main()
{
	long t;
	scanf("%li",&t);
	while(t--)
	{
		long n,i,start,end,j;
		long long total=0,path1=0,path2=0;
		scanf("%li",&n);
		long r[n];
		for(i=0;i<n;i++)
		{
			scanf("%li",&r[i]);
			total=total+r[i];
		}
		scanf("%li%li",&start,&end);
		start--;
		end--;
		for(i=start;i!=end;i=(i+1+n)%n)
		path1=path1+r[i];
		path2=total-path1;
		i=start;
		j=end;
		long min=0,m1=0,m2=0;
		while(i!=j)
		{
			m1=m1+2*r[(i-1+n)%n];
			m2=m2+2*r[j];
		    if(r[(i-1+n)%n]<r[j] && r[(i-1+n)%n]<0)
			{
				i=(i-1+n)%n;
				min=min+m1;
				m1=0;
			}
			else if(r[(i-1+n)%n]>r[j] && r[j]<0)
			{
				
				j=(j+1)%n;
				min=min+m2;
				m2=0;
			}
			else
			break;
		}
		path1=path1+min;
		m1=0;m2=0;min=0;
		while(i!=j)
		{
			if(r[(i-1+n)%n]<r[j])
			{
				m1=m1+2*r[(i-1+n)%n];
				i=(i-1+n)%n;
				if(m1<0)
				{
					min=min+m1;
					m1=0;
				}
			}
			else
			{
				m2=m2+2*r[j];
				j=(j+1)%n;
				if(m2<0)
				{
					min=min+m2;
					m2=0;
				}
			}
		}
		path1=path1+min;
		i=start;
		j=end;
		min=0;m1=0;m2=0;
		while(i!=j)
		{
			m1=m1+2*r[i];
			m2=m2+2*r[j-1];
		    if(r[i]<r[j-1] && r[i]<0)
			{
				i++;
				min=min+m1;
				m1=0;
			}
			else if(r[i]>r[j-1] && r[j-1]<0)
			{
				
				j--;
				min=min+m2;
				m2=0;
			}
			else
			break;
		}
		path2=path2+min;
		m1=0;m2=0;min=0;
		while(i!=j)
		{
			if(r[i]<r[j-1])
			{
				m1=m1+2*r[i];
				i++;
				if(m1<0)
				{
					min=min+m1;
					m1=0;
				}
			}
			else
			{
				m2=m2+2*r[j-1];
				j--;
				if(m2<0)
				{
					min=min+m2;
					m2=0;
				}
			}
		}
		path2=path2+min;
		if(path1>path2)
		printf("%lld\n",path2);
		else
		printf("%lld\n",path1);
	}
	return 0;
}  

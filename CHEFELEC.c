#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	long n,j,x[100000],ans[10],ab,a;
	char str[100000];
	for(i=0;i<t;i++)
	{
		ans[i]=0;
		scanf("%li",&n);
		scanf("%s",str);
		for(j=0;j<n;j++)
		scanf("%li",&x[j]);
		
		for(j=0;j<n;j++)
		{
			if(str[j]=='1')
			{
				ans[i]=x[j]-x[0];
				break;
			}
		}
		for(j=j+1;j<n;j++)
		{
			if(str[j]=='1')
			continue;
			else
			{
				ab=0;
				for(a=j;a+1<n && str[a]=='0';a++)
				{
					if((x[a+1]-x[a])<(x[j]-x[j-1]))
					{
						str[a]='1';
						ans[i]=ans[i]+x[a+1]-x[a];
					}
					else
					{
						str[a]='1';
						ans[i]=ans[i]+x[j]-x[j-1];
						break;
					}
				}
				if(a==n-1 && str[a]=='0')
				ans[i]=ans[i]+x[j]-x[j-1];
				j=a;
			}
		}
	}
	for(i=0;i<t;i++)
	printf("%li\n",ans[i]);
	return 0;
}

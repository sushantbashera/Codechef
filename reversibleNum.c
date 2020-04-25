#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	long t;
	scanf("%d",&t);
	
	unsigned long n[t],i;
	for(i=0;i<t;i++)
	scanf("%lu",&n[i]);
	
	for(i=0;i<t;i++)
	{
		unsigned long rev,ans=0,num,j,count,x;
		for(j=1;j<n[i];j++)
		{
			rev=0;
			num=j;
			count=0;
			while(num>0)
			{
				rev=10*rev+(num%10);
				num=(int)(num/10);
			}
			rev=rev+j;
			while(rev>0)
			{
				x=rev%10;
				if(x%2==0)
				{
					ans=1;
					break;
				}
				rev=(int)(rev/10);
			}
			if(ans==0)
			count++;
		}	
		printf("%lu",count);
	}
	return 0;
}

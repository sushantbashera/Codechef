#include<stdio.h>
#include<stdlib.h>
int main()
{
	long n,q,i;
	scanf("%li %li",&n,&q);
	long a[n];
	for(i=0;i<n;i++)
	scanf("%li",&a[i]);
	for(i=0;i<q;i++)
	{
		int p;
		long b,c,j,k;
		scanf("%d %li %li",&p,&b,&c);
		if(p==1)
		{
			a[b-1]=c;
		}
		else
		{
			long arr[c-b],max=0,flag=-1;
			for(j=b-1;j<c;j++)
			arr[j]=0;
			for(j=b-1;j<c;j++)
			{
				arr[a[j]]++;
				if(arr[a[j]]>max)
				max=arr[a[j]];
				if((max*2)>(c-b))
				{
					printf("Yes\n");
					flag=1;
					break;
				}
			}
			if(flag==-1)
			printf("No\n");
		}
	}
	return 0;
}

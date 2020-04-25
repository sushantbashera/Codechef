#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long n,q,i,j;
	scanf("%li %li",&n,&q);
	long arr[n],ans[n],count=0,min,query,a,b,c;
	for(i=0;i<n;i++)
	scanf("&li",&arr[i]);
	for(i=0;i<q;i++)
	{
		scanf("%li",&query);
		if(query)
		{
			scanf("%li %li %li",&a,&b,&c);
			for(j=a;j<=b;j++)
			arr[j]=arr[j]&c;
		}
		else
		{
			scanf("%li %li",&a,&b);
			min=arr[a];
			for(j=a+1;j<=b;j++)
			if(arr[j]<min)
			min=arr[j];
			ans[count]=min;
			count++;
		}
	}
	for(i=0;i<count;i++)
	printf("%li",ans[i]);
}

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
		long b,c,j,k,num;
		scanf("%d %li %li",&p,&b,&c);
		if(p==1)
		{
			a[b-1]=c;
		}
		else
		{
			int flag=-1;
			for(j=b-1;j<=c-1;j++)
			{
				num=1;
				for(k=j+1;k<=c-1;k++)
				{
					if(a[k]==a[j])
					num++;
					if((num*2)>(c-b))
					{
						printf("Yes\n");
						flag=1;
						break;
					}
				}
				if(flag==1)
				break;
			}
			if(flag==-1)
			printf("No\n");
		}
	}
	return 0;
}

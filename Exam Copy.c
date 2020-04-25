#include<stdio.h>
#include<stdlib.h>
int main()
{
	long n,m,i,j,p=0;
	scanf("%li %li",&n,&m);
	long k[n],l[m],r[m],d;
	int ch[n];
	for(i=0;i<n;++i)
	scanf("%li",&k[i]);
	for(i=0;i<m;++i)
	{
		scanf("%li %li",&l[i],&r[i]);
		for(j=l[i];j<=r[i];++j)
		ch[j-1]=p;
		p++;
	}
	scanf("%li",&d);
	for(i=0;i<n;++i)
	{
		long kn=0,no=0;
		for(j=i-d;j<=i+d;++j)
		{
			if(j<0 || j>=n || k[j]<=k[i] || ch[i]==ch[j])
			continue;
			else
			{
				if(kn<k[j])
				{
					kn=k[j];
					no=1;
				}
				else if(kn==k[j])
				no++;
			}
		}
		if(!no)
		printf("-1\n");
		else
		printf("%li %li\n",kn,no);
	}
	return 0;
}

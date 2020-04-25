#include<stdio.h>
#include<stdlib.h>
int main()
{
	long n,h,ptr=0;
	scanf("%li %li",&n,&h);
	long i,box[n];
	for(i=0;i<n;i++)
	scanf("%li",&box[i]);
	int com,pick=0;
	scanf("%d",&com);
	while(com!=0)
	{
		if(com==1 && ptr!=0)
		ptr--;
		else if(com==2 && ptr!=n-1)
		ptr++;
		else if(com==3 && box[ptr]!=0 && pick==0)
		{
			box[ptr]--;
			pick=1;
		}
		else if(com==4 && box[ptr]!=h && pick==1)
		{
			box[ptr]++;
			pick=0;
		}
		scanf("%d",&com);
	}
	for(i=0;i<n;i++)
	printf("%li ",box[i]);
	return 0;
}

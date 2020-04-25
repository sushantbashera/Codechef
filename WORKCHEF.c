#include<stdio.h>
int main()
{
	int t,i,k,dig;
	scanf("%d",&t);
	unsigned long long l,r,ans,j,num;
	for(i=0;i<t;i++)
	{
		ans=0;
		scanf("%llu %llu %d",&l,&r,&k);
		for(j=l;j<=r;j++)
		{
			int digits[9]={0,0,0,0,0,0,0,0,0},kch=k;
			num=j;
			while(num && kch)
			{
				dig=num%10;
				num=num/10;
				if(dig && j%dig==0 && digits[dig-1]==0)
				{
					kch--;
					digits[dig-1]=1;
				}
			}
			if(!kch)
			ans++;
		}
		printf("%llu\n",ans);		
	}
}

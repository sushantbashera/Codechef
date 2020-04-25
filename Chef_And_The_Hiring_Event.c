#include<stdio.h>
#include<conio.h>
#include<math.h>
long fouradd(int *,int);
long twoadd(int *,int);
long threeadd(int *,int);
long twoadd(int *num,int length)
{
	int i,j;
	unsigned long s=0;
	for(i=0;i<length;i++)
	for(j=i+1;j<length;j++)
	s=s+num[i]*num[j];
	return s;
}
long threeadd(int *num,int length)
{
	int i,j,k;
	unsigned long s=0;
	for(i=0;i<length;i++)
	for(j=i+1;j<length;j++)
	for(k=j+1;k<length;k++)
	s=s+num[i]*num[j]*num[k];
	return s;
}
long fouradd(int *num,int length)
{
	int i,j,k,l;
	unsigned long s=0;
	for(i=0;i<length;i++)
	for(j=i+1;j<length;j++)
	for(k=j+1;k<length;k++)
	for(l=k+1;l<length;l++)
	s=s+num[i]*num[j]*num[k]*num[l];
	return s;
}
int main()
{
	int t,i;
	scanf("%d",&t);
	
	unsigned long k[t];
	for(i=0;i<t;i++)
	scanf("%lu",&k[i]);
	
	for(i=0;i<t;i++)
	{
		int len,no[13],j;
		unsigned long sum,n=2,tmp,x=1;
		
		while(n<=1000000000000)
		{
			len=floor(log10(abs(n)))+1;
			tmp=n;
			sum=0;
			for(j=len-1;j>=0;j--)
			{
				no[j]=tmp%10;
				tmp=tmp/10;
				sum=sum+no[j];
				x=x*no[j];
			}
			if(len>=3)
			sum=sum+twoadd(no,len);
			if(len>=4)
			sum=sum+threeadd(no,len);
			if(len>=5)
			sum=sum+fouradd(no,len);
			
			if(n/10!=0)
			sum=sum+x;
			if(sum%2==0)
			k[i]--;
			if(k[i]==1)
			{
				printf("%lu\n",n);
				break;
			}
			n++;
		}	
	}
	
	getch();
	return 0;
}

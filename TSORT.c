#include<stdio.h>
int main()
{
    long a[1000000],i,n,num=0,x,j,p;
    scanf("%d",&n);
    for(p=0;p<n;p++)
    {
    	scanf("%d",&a[p]);
    	num++;
    	for(i=0;i+1<num;++i)
    	{
        	x=a[i];
			j=i-1;
        	while(j>=0 && a[j]>x)
        	{
            	a[j+1]=a[j];
            	j--;
        	}
    		a[j+1]=x;
    	}       
	}
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}

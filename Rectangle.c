#include<stdio.h>
#include<stdlib.h>
void ins_c(long *a, int *b,int n)
{
    int i,j,x,y;
    for(i=0;i<n;++i)
    {
        x=a[i];
		j=i-1;
        y=b[i];
        while(j>=0 && a[j]>x)
        {
        	a[j+1]=a[j];
        	b[j+1]=b[j];
            j--;
        }
        a[j+1]=x;
    	b[j+1]=y;
    }
}
int main()
{
	long n,i,j,area=0,ar=0;
	scanf("%li",&n);
	long a[n];
	int b[n],y;
	for(i=0;i<n;i++)
	scanf("%li %d",&a[i],&b[i]);
	ins_c(a,b,n);
	for(i=0;i<n-1;i++)
	{
		y=500;
		for(j=i+2;j<n;j++)
		{
			ar=0;
			if((a[j]>a[i])&&(a[j]<a[i+1]) || (a[j]<a[i])&&(a[j]>a[i+1]))
			{
				if(y>b[j])
				y=b[j];
			}
		}
		ar=y*(a[i+1]-a[i]);
		if(ar<0)
		ar=-ar;
		if(ar>area)
		area=ar;
	}
	if((100000-a[n-1])*500>area)
	area=(100000-a[n-1])*500;
	if(a[0]*500>area)
	area=a[0]*500;
	printf("%li",area);
}
	

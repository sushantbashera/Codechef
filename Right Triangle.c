#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long t,i;
	scanf("%li",&t);
	unsigned long long s[t];
	double x1,x2,x11;
	long h[t];
	for(i=0;i<t;i++)
	scanf("%li %llu",&h[i],&s[i]);
	
	for(i=0;i<t;i++)
	{
		if(h[i]*h[i]*h[i]*h[i]-16*s[i]*s[i]<0)
		printf("-1\n");
		else
		{
			x1=(h[i]*h[i]+sqrt(h[i]*h[i]*h[i]*h[i]-16*s[i]*s[i]))/2;
			x2=(h[i]*h[i]-sqrt(h[i]*h[i]*h[i]*h[i]-16*s[i]*s[i]))/2;
			
			x11=sqrt(h[i]*h[i]-x1);
			x1=sqrt(x1);
			if(x1>x11)
			printf("%lf %lf %li\n",x11,x1,h[i]);
			else
			printf("%lf %lf %li\n",x1,x11,h[i]);
				/*if(x1>0)
				{
					x11=sqrt(h[i]*h[i]-x1);
					x1=sqrt(x1);
					if(x1>x11)
					printf("%lf %lf %li\n",x11,x1,h[i]);
					else
					printf("%lf %lf %li\n",x1,x11,h[i]);
				}
				else if(x2>0)
				{
					x11=sqrt(h[i]*h[i]-x2);
					x2=sqrt(x2);
					if(x2>x11)
					printf("%lf %lf %li\n",x11,x2,h[i]);
					else
					printf("%lf %lf %li\n",x2,x11,h[i]);
				}*/
		}
	}
	return 0;
}

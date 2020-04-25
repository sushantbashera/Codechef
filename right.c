#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long t,i;
	scanf("%li",&t);
	unsigned long long s[t];
	long double x1,x2,x3,x4;
	long h[t];
	for(i=0;i<t;i++)
	scanf("%li %llu",&h[i],&s[i]);
	
	for(i=0;i<t;i++)
	{
		x1=h[i]*h[i]+4*s[i];
		x2=h[i]*h[i]-4*s[i];
		x3=(sqrt(x1)+sqrt(x2))/2;
		x4=(sqrt(x1)-sqrt(x2))/2;
		if((x3+x4<=h[i]) || (x3+h[i])<=x4 || (x4+h[i]<=x3))
		printf("-1\n");
		if(x3<x4)
		printf("%lf %lf %li\n",x3,x4,h[i]);
		else
		printf("%lf %lf %li\n",x4,x3,h[i]);
	}
return 0;
}

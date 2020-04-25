#include<stdio.h>
int main()
{
long t,i,n,j,c2,c5,num;
scanf("%li",&t);
for(i=0;i<t;i++)
{
	scanf("%li",&n);
	c2=0;c5=0;
	for(j=2;j<=n;j++)
	{
		num=j;
		while(num!=0 && num%2==0)
		{
			c2++;
			num=num/2;
		}
		while(num!=0 && num%5==0)
		{
			c5++;
			num=num/5;
		}
	}
	if(c2>c5)
	printf("%li\n",c5);
	else
	printf("%li\n",c2);
}
return 0;
}

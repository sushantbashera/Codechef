#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned long n,q,min,max,i;
	scanf("%lu %lu",&n,&q);
	
	unsigned long a[n],b[q];
	for(i=0;i<n;i++)	
	scanf("%lu",&a[i]);
	
	for(i=0;i<q;i++)	
	scanf("%lu",&b[i]);
	
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
			
	for(i=0;i<q;i++)
	{
		if(b[i]>=min && b[i]<=max)
		printf("Yes\n");
		else
		printf("No\n");
	}
	getch();
	return 0;
}

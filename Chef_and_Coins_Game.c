#include<stdio.h>
#include<conio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	
	unsigned long n[t];
	for(i=0;i<t;i++)
	scanf("%lu",&n[i]);
	
	for(i=0;i<t;i++)
	{
		if(n[i]%6==0)
		printf("Misha\n");
		else
		printf("Chef\n");	
	}
	
	getch();
	return 0;
}

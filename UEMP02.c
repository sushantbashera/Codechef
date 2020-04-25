#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,x,start=1,diff,p;
	scanf("%d %d",&n,&m);
	while(start<=m)
	{
		p=0;
		diff=1;
		while(diff<=100)
		{
			if(n*(2*start+(n-1)*diff)==2*m)
			{
				p=1;
				printf("possible\n");
				break;
			}
			diff++;
		}
		if(p==1)
		break;
		start++;
	}
	if(p==0)
	printf("impossible\n");
	return 0;
}

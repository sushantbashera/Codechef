#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	char c[n][m];
	for(i=0;i<n;i++)
	scanf("%s",c[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(c[i][j]=='C')
			break;
		}
	}
	if(c[i-1][j]=='.')
	printf("D");
	else if(c[i+1][j]=='.')
	printf("U");
	else if(c[i][j-1]=='.')
	printf("R");
	else if(c[i][j+1]=='.')
	printf("L");
	return 0;
}

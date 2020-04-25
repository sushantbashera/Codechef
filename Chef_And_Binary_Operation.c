#include<stdio.h>
#include<conio.h>
#include<string.h>
int check(char *s,int l)
{
	int i,flag=0;
	for(i=0;i<l-1;i++)      
    {         
        if(s[i]!=s[i+1])
         return 0;
    }
    return 1;
}
int main()
{
	char a[1000000],b[1000000];
	long t,i,len;
	scanf("%l",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&a);
		scanf("%s",&b);
	}
	for(i=0;i<t;i++)
	{
		len=strlen(a);
		if(strlen(a)!=strlen(b))
		printf("Unlucky Chef");
		else if(check(a,len))
		printf("Unlucky Chef");
		else
		{
			long sum=0;
			printf("Lucky Chef");
			
		}
	}
}

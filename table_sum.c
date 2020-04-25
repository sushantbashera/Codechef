#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,l,k,p;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=1;p<=n;p++)
    {                l=a[0]+p;
                     for(k=1,j=p+1;k<n;k++,j++)
                     {
                                     if(j>n)
                                     j=j-n;        
                                     if((a[k]+j)>l)
                                     l=a[k]+j;
                     }
                      printf("%d ",l);
    }
    getch();
    return 0;
}                
                                        

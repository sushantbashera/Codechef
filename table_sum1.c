#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=1;j<=n;j++)
    {                l=a[0]+j;
                     for(k=1;k<n;k++,j++)
                     {
                                     if(j>n)
                                     j=j-n;        
                                     if((a[k]+j)>l)
                                     l=a[k]+j;
                     }
                      printf("%d\n",l);
    }
    getch();
    return 0;
}                
                                        

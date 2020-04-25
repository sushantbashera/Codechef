#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,i,l1,l2,j,ans=0;char a[10][1000],b[10][1000],c[2000],s1[1000],s2[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {scanf("%s %s",a[i],b[i]);}
    for(i=0;i<t;i++)
    {
                    for(l1=1;l1<=strlen(a[i]);l1++)
                    {                     
                          for(j=1;j<=l1;j++)
                          s1[j-1]=a[i][j-1];
                          for(l2=1;l2<=strlen(b[i]);l2++)
                          {                     
                                                for(j=1;j<=l2;j++)
                                                s2[j-1]=b[i][j-1];
                                                strcpy(c[i],strcat(s1,s2));
                                                if(strcmp(c[i],strrev(c[i])==0)
                                                {ans=1;break;}
                          }
                    }
    }
    if(ans==1) printf("Yes");
    else printf("No");
    getch();
    return 0;
}
                                                                                                    
    

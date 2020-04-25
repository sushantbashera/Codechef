#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,c=0,j;
    char a[1000];
    scanf("%s",a);
    while(a[i]!='\0')
    {
                     if(a[i]>='A' && a[i]<='Z' && a[i+1]>='A' && a[i+1]<='Z')
                     {
                                  j=i+1;
                                  c=c+1;
                                  printf("%d",c);
                                  while(a[j]>='A' && a[j]<='Z')
                                  {
                                                  j++;
                                                  if(a[j]==' ')
                                                  break;
                                                  else if(a[j]>='a' && a[j]<='z')
                                                  c=c-1;
                                                  printf("%d",c);
                                  }
                     }
                     i=i+1;
    }
    printf("%d",c);
    getch();
    return 0;
}
                     
    

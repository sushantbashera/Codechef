#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t,i,c,j;
    scanf("%d",&t);
    char a[t][100];
    for(i=0;i<t;i++)
    scanf("%s",a[i]);
    for(i=0;i<t;i++)
    {
                    c=0;
                    j=0;
                    while(a[i][j]!='\0')
                    {
                                        switch(a[i][j])
                                        {
                                                       case 'A':
                                                       case 'O':
                                                       case 'P':
                                                       case 'Q':
                                                       case 'R':
                                                       case 'D':c++;break;
                                                       case 'B':c=c+2;break;
                                                       default:c=c;
                                        }j++;
                    }printf("%d\n",c);
    }
    getch();
    return 0;
}

                    
    

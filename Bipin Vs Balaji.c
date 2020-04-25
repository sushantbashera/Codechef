#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    long a[t][2];
    for(i=0;i<t;i++)
    {
                    scanf("%d",&a[i][0]);
                    scanf("%d",&a[i][1]);
    }
    for(i=0;i<t;i++)
    {
                    if(a[i][0]>a[i][1])
                    printf("Bipin %d\n",a[i][0]-a[i][1]);
                    else if(a[i][0]<a[i][1])
                    printf("Balaji %d\n",a[i][1]-a[i][0]);
                    else
                    printf("No Winner\n");
    }
    getch();
    return 0;
}

#include<stdio.h>
void makeheap(long *a,long root,long end)
{
     long maxchild,left,right,t;
     if(root<=(end-1)/2)
     {
        left=root*2+1;
        right=left+1;
        if(left==end || a[left]>a[right])
        maxchild=left;
        else
        maxchild=right;
        if(a[root]<a[maxchild])
        {
            t=a[maxchild];
            a[maxchild]=a[root];
            a[root]=t;
            makeheap(a,maxchild,end);
        }
     }
}
void heapsort(long *a,long start,long end)
{
     long t;
     if(start<end)
     {
        makeheap(a,start,end);
        t=a[start];
        a[start]=a[end];
        a[end]=t;
        heapsort(a,start,end-1);
     }
}

int main()
{
    long n,i;
    scanf("%li",&n);
    long a[n];
    for(i=0;i<n;i++)
    scanf("%li",&a[i]);
    for(i=(n-2)/2;i>=0;i--)
    makeheap(a,i,n-1);
    heapsort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%li\n",a[i]);
    return 0;
}

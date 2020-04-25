#include<stdio.h>
#include<stdlib.h>
void makeheap(long long *a,long long root,long long end)
{
     long long maxchild,right,left,q;
     if(root<=(end-1)/2)
     {
                left=2*root+1;
                right=2*root+2;
                if(left==end)
                maxchild=left;
                else if(a[left]>a[right])
                maxchild=left;
                else
                maxchild=right;
                if(a[root]<a[maxchild])
                {
                          q=a[root];
                          a[root]=a[maxchild];
                          a[maxchild]=q;
                          makeheap(a,maxchild,end);
                }
     }
}                
void heapsort(long long *a,long long start,long long end)
{     long long t;
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
	long long i,j;
	long n;
	scanf("%d",&n);
	long long rev=0,a[n];
	for(i=0;i<n;i++)
	scanf("%llu",&a[i]);
	for(i=(n-2)/2;i>=0;i--)
    makeheap(a,i,n-1);
    heapsort(a,0,n-1);

	for(i=0;i<n;i++)
	{
		if(a[i]*(n-i)>=rev)
		rev=a[i]*(n-i);
	}
	printf("%lld",rev);
	return 0;
}
	

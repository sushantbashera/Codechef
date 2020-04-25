#include<stdio.h> 
#include<cstdio>
#define gc getchar_unlocked
#define mod 786433
 
void scanint(long long &x)
{
   register long long c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
using namespace std;
 
inline long long findpower(long long b,long long e)
{ 
	long long r=1; 
	while(e)
	{ 
		if(e & 1) 
		r=(r*b)%mod; 
		b=(b*b)%mod; 
		e>>=1;
	} 
	return r;
}

int main()
{
    long long n,a[250001],i,j,sum=0,q,p,t;
    scanint(n);
    
    for(i=0;i<=n;i++)
    scanint(a[i]);
     
    scanint(q);
    for(i=0;i<q;i++)
	{
     	scanint(p);
        t=0;
        while(t<n+1)
		{
        	sum+=(a[t]*findpower(p,t)%mod);
        	sum%=mod;
            t++;
        }
        printf("%lld\n",sum);
        sum=0;
    }
}

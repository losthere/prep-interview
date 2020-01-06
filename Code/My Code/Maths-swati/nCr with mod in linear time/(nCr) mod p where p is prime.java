import java.io.*; 

public class GFG 
{ 
    
static long power(long x,long y,long mod)
{
    long res=1;
    while(y>0)
    {
	    if((y&1)==1)
	        res=(res*x)%mod;
	    
	    y=y>>1;
	    x=(x*x)%mod;
	}
    return res;
}

static long solve_this(long n, long r, long mod) 
{ 
    long factn,factr,factrem,i,dominator,rem=n-r;
	
	factn=factr=factrem=1;
    
	for(i=1;i<=n;i++)
        factn=(factn*i)%mod;
    
	for(i=1;i<=r;i++)
        factr=(factr*i)%mod;
    
	for(i=1;i<=rem;i++)
        factrem=(factrem*i)%mod;
    
    dominator=(factr*factrem)%mod;
    long val = (factn*(power(dominator,mod-2,mod)))%mod;
    return val;      
	
} 

public static void main (String[] args) 
{ 
	long x = 6L,y=2L,mod=13L; 
    long res = solve_this(x, y, mod);
	System.out.println(res); 
} 
} 


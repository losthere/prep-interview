/*
union find operation
if there are m union find operation on n vertices 
then O(n + m (log n)) S(v)

if path compression applied 
then O(n + m iterator(log n)) S(v)

When we use Weighted-union with path compression it takes log * N for each union find operation,where N is the number of elements in the set.
log *N is the iterative function which computes the number of times you have to take log of N till the value of N doesn’t reaches to 1.
log*N is much better than log N, as its value reaches at most up to 5 in the real world.
*/

//not able to understand the path compression step
#include<bits/stdc++.h>
using namespace std;
typedef long long int li;

li parent[100000],sz[100000];
li n;

void initialize(li nodes)
{
    for(li i=1;i<=nodes;i++)
	{
    	parent[i]=i;
    	sz[i]=1;
	}
}

li root(li x) //for every root element parent[x]=x
{
    while(parent[x]!=x)
    {
        //parent[x]=parent[parent[x]]; single line of code added to implement PATH COMPRESSION //without this line, code works //assign parent to grandparent 
        x=parent[x];
    }

    return x;
}

void weightedUnion(li x,li y)
{
    li p=root(x);
    li q=root(y);
    if(sz[p]<sz[q]) //weighted union i.e union by rank to minimize the height of the components //this make complexity as logarithmic
    {
    	parent[p]=parent[q];
    	sz[q]=sz[q]+sz[p];
	} 
	else
	{
		parent[q]=parent[p];
    	sz[p]=sz[p]+sz[q];
	}
}

bool find(li x,li y)
{
	if(root(x)==root(y))
	   return true;
	else
	   return false;	
}

int main()
{
	li x,y,chk,i,m;
    cin>>n;
    initialize(n);
    		
	cin>>x>>y;
	if(!find(x,y))
	   weightedUnion(x,y);

    return 0;	
}




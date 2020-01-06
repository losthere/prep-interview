#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
#define cc continue
#define bb break
#define rr return
#define W while
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
//vector<li> vec;
//pair<li,li> pa[1000000];
//string str1,str2;
//li a[1000000];
vector<pair<li,li> > vec[10000];
li vis[10000]={0},dist[10000];
stack<li> st;

void initialise(li v)
{
	for(li i=1;i<=v;i++)
		dist[i]=INT_MAX;
}

void dfs(li i)
{
	vis[i]=1;  //cout<<i<<" ";
	for(li j=0;j<vec[i].size();j++)
	{
		if(!vis[vec[i][j].first])
			dfs(vec[i][j].first);
	}		
	st.push(i);	
}

int solve_this()
{
	li i,j,n,x,y,v,e,src,w,weight,u;
	cin>>v>>e;
	initialise(v);
	for(i=0;i<e;i++)
	{
		cin>>x>>y>>w;
		vec[x].push_back(make_pair(y,w));
	}
	
	for(i=1;i<=v;i++)
	{
		if(!vis[i])
			dfs(i);	
	}
	
	/*while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}*/
	
	cin>>src;  dist[src]=0;
	while(!st.empty())
	{
		i=st.top();
		if(i==src)
			break;
		st.pop();
	}
	
	while(!st.empty())
	{
		u=i=st.top();
		for(j=0;j<vec[i].size();j++)
		{
			v=vec[i][j].first;
			weight=vec[i][j].second;
			if(dist[u]+weight<dist[v])
				dist[v]=dist[u]+weight;
		}
		st.pop();
	}
	
	for(i=1;i<=v;i++)
	{
		if(dist[i]==INT_MAX)
			cout<<i<<" is not reachable from given source\n";
		else
			cout<<i<<" "<<dist[i]<<"\n";
		
	}
	rr 0;
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
//freopen("i.txt","r",stdin);
//freopen("o.txt","w",stdout);
//li T;  cin>>T;  W(T--)
solve_this();
rr 0;
}



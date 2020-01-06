/*
O(V*E)
*/

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
#define INF 0x3f3f3f3f
//vector<li> vec;
//pair<li,li> pa[1000000];
//string str1,str2;
//li a[1000000];
vector< pair<li,li> > vec[10000];
vector<li> dist(10000,INF);
li vtx,edge;

void bellman_ford(li s)
{
	li i,j,k,u,v,w,chk;
	dist[s]=0;
	for(k=1;k<=vtx-1;k++)
	{
		for(i=1;i<=vtx;i++)
		{
			u=i;
			for(j=0;j<vec[i].size();j++)
			{
				v=vec[i][j].fir;  w=vec[i][j].sec;
				if(dist[u]+w<dist[v])
					dist[v]=dist[u]+w;
			}	
		}	
	}
	
	chk=0;
	for(i=1;i<=vtx;i++)
	{
		u=i;  
		for(j=0;j<vec[i].size();j++)
		{
			v=vec[i][j].fir;  w=vec[i][j].sec;
			if(dist[u]+w<dist[v])
			{
				cout<<"NEGATIVE CYCLE EXIST";
				chk=1;
				break;	
			}	
		}	
		if(chk==1)
			break;
	}
}

void solve_this()
{
	li i,x,y,w,s;
	cin>>vtx>>edge;
	for(i=0;i<edge;i++)
	{
		cin>>x>>y>>w;
		vec[x].push_back(make_pair(y,w));
		vec[y].push_back(make_pair(x,w));
	}
	
	cin>>s;
	bellman_ford(s);
	
	for(i=1;i<=vtx;i++)
		cout<<i<<" "<<dist[i]<<"\n";	
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
solve_this();
rr 0;
}



/*
O(V^3)
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
li dist[1000][1000];
li vtx,edge;

void floyd_warshall(li s)
{
	li i,j,k;
	for(k=1;k<=vtx;k++)
	{
		for(i=1;i<=vtx;i++)
		{
			for(j=1;j<=vtx;j++)
			{
				if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
}

void solve_this()
{
	li i,x,y,w,s,j;
	cin>>vtx>>edge;
	
	for(i=1;i<=vtx;i++)
	{
		for(j=1;j<=vtx;j++)
		{
			if(i==j)
				dist[i][j]=0;
			else
				dist[i][j]=INF;
		}		
	}
	
	for(i=0;i<edge;i++)
	{
		cin>>x>>y>>w;
		vec[x].push_back(make_pair(y,w));
		vec[y].push_back(make_pair(x,w));
		dist[x][y]=w;  dist[y][x]=w;
	}
	
	cin>>s;
	floyd_warshall(s);	
	
	for(i=1;i<=vtx;i++)
	{
		for(j=1;j<=vtx;j++)
		{
			if(dist[i][j]==INF)
				cout<<"i is not connected to j";
			else
				cout<<"distance of vertex "<<i<<" from "<<j<<" is "<<dist[i][j]<<"\n";	
		}			
	}	
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
solve_this();
rr 0;
}



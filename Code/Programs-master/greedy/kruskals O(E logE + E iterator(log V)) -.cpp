#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const int MAX = 1e4 + 5;    //max no. of nodes possible
int id[MAX], nodes, edges, sz[MAX];
pair <long long, pair<int, int> > p[MAX];

void initialize(int nodes)
{
    for(int i = 1;i <= nodes;++i)
        {
        	id[i] = i;
        	sz[i] = 1;
		}
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];          //single line of code added to implement PATH COMPRESSION 
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    if(sz[p]<sz[q])            //this is for weighted union i.e union by rank to minimize the height of the components
    {
    	id[p] = id[q];
    	sz[q] = sz[q] + sz[p];
	} 
	else
	{
		id[q] = id[p];
    	sz[p] = sz[p] + sz[q];
	}
}

long long kruskal()
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        
		// Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }    
    }
    return minimumCost;
}

int main()
{
    int x, y;
    long long weight, cost, minimumCost;
    cin >> nodes >> edges;
    initialize(nodes);
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;  
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal();
    cout << minimumCost << endl;
    return 0;
}


/*
3 3
0 1 1 
1 2 3
2 0 2
*/

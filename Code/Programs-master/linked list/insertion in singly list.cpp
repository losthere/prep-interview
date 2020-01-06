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

struct node
{
	int val;
	node *next;
};

node* create_node(int val)
{
	node *root=new node;
	root->val=val;
	root->next=NULL;
	
	return root;
}

void solve_this()
{
	li n,i,t,val;
	node *head,*curr,*prev;
	cin>>n;
	
	curr=head; prev=NULL;
	for(i=0;i<n;i++)
	{
		cin>>t;
		node *curr=create_node(t);
		
		if(prev!=NULL)    //if(i==0)
		prev->next=curr;
		else
		head=curr;
		
		prev=curr;
	}
	
	curr=head;
	while(curr!=NULL)
	{
		cout<<curr->val<<" ";
		curr=curr->next;
	}
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



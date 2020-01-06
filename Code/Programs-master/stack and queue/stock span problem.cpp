/*
stock span problem
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}
geeks implementation is different
O(n) S(n)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n],ans[n];
    stack<int> st;
    
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    i=0;
    while(i<n)
    {
        if(st.empty() || arr[st.top()]>=arr[i])
        {
            st.push(i);
            i++;
        }
        else
        {
            int tp=st.top();
            //cout<<tp<<" ";
            st.pop();
            
            if(!st.empty())
                ans[tp]=tp-st.top();
            else
                ans[tp]=tp+1;
        }
    }
    
    while(!st.empty())
    {
        int tp=st.top();
        //cout<<tp<<" ";
        st.pop();
        
        if(!st.empty())
            ans[tp]=tp-st.top();
        else
            ans[tp]=tp+1;
    }
        
	for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
}

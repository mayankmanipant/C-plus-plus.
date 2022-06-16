#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node)
{
    //preoreder
    vis[node]=1;
    cout<<node<<" ";

    //inorder
    vector<int> :: iterator it;

    for(it=adj[node].begin(); it!=adj[node].end(); it++)
    {
        if(vis[*it]);
        else
        {
            dfs(*it);
        }
    }


    //postorder
    //cout<<node<<" ";
}

int main()
{
     int n,m;
     //no. of vertices and edges
     cout<<"Enter number of nodes and edges";
     cin>>n>>m;

    for(int i=0;i<=n;i++)
    {
        vis[i]=false;
    }

    int x,y;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;

        //undirected graph
        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    dfs(0);    //root node
}

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
bool vis[N];
vector<int> adj[N];

int main()
{
    for(int i=0;i<N;i++)
    {
        vis[i]=0;
    }
    int n,m;
    cout<<"Enter number of nodes and edges";
    cin>> n >> m;

    int x,y;    //To input edges
    for(int i=0;i<m;i++)
    {
        cin>> x >> y;
         
        // two way edges(undirected)
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;

    q.push(2);   //if our root node is 1 we can change it by taking input root node
    vis[1]=true;

    cout<<"BFS:"<<endl;
    while(!q.empty())
    {
        int  node=q.front();

        q.pop();
        cout<< node<<endl;

        vector<int> :: iterator it;

        for(it=adj[node].begin();it!=adj[node].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
    return 0;
}

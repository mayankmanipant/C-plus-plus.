#include<bits/stdc++.h>

using namespace std;

class Graph
{
    int v;          //no of vertices
    list<int> *adj;    //pointer to an array conatning adjancency lists
    bool isCyclicUtil(int v,bool visited[],bool *rs);
    public:
    Graph(int V);                        //constructor
    void addEdge(int v,int w);
    bool isCyclic();
};

Graph::Graph(int v)
{
    this->v=v;
    adj= new list <int>[v];
}

void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);         //add w to v's list
}

bool Graph::isCyclicUtil(int v,bool visited[],bool *recStack)
{
    if(visited[v]==false)
    {
        visited[v]=true;
        recStack[v]=true;

        list<int>::iterator it;
        for(it=adj[v].begin(); it!=adj[v].end(); ++it)
        {
            if(!visited[*it]  && isCyclicUtil(*it,visited,recStack))
            {
                return true;
            }
            else if(recStack[*it]){
                return true;
            }
        }
        recStack[v]=false;
        return false;
    }
}

bool Graph::isCyclic()
{
        bool *visited=new bool[v];
        bool *recStack=new bool[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
            recStack[i]=false;
        }

        for(int i=0;i<v;i++)
        {
            if(!visited[i] && isCyclicUtil(i,visited,recStack))
            {
                return true;
            }
        }
        return false;
}

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    if(g.isCyclic())
    {
        cout<<"Graph conatins cycle";
    }
    else
    {
        cout<<"Graph doesn't contain cycle";
    }
    return 0;
}

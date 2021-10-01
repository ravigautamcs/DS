#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map<T, list<T> > adjList;
    public:
    //constructor
    Graph(){

    }

    void addEdge(T u, T v, bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }

    void print(){
        for(auto i: adjList){
            cout<<i.first<<"->";

            for(auto entry : i.second){
                cout<<entry<<",";
            }
        cout<<endl;
        }
    }

    void dfsHelper(T node, map<T, bool> &visited){
        // whenever come to a node mark it as visited
        visited[node]=true;
        cout<<node<<" ";

        //try to find out the node which is neigbour of current node and not yer visited
        for( T nebor : adjList[node]){
            if(!visited[nebor]){
                dfsHelper(nebor, visited);
            }
        }
    }

    void dfs(T src){
        map<T, bool> visited;

        int component = 1;
        dfsHelper(src, visited);
        cout<<"\n";

        for(auto i : adjList){
            T city = i.first;
            if(!visited[city]){
                dfsHelper(city, visited);
                component++;
            }
        }
        cout<<"The current graph had "<<component<<" components.";
    }

};

int main(){

     Graph<int> g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);

    g.addEdge(7,8);
    g.addEdge(8,9);
    g.addEdge(7,9);
    
    g.dfs(0);

    return 0;
}
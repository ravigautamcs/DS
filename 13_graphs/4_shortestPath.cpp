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

    void shortestpathinUnweightedGraph(T src){
        queue<T> q;
        map<T, int> dist;
        map<T,T> parent;

        for(auto i : adjList){
            dist[i.first]= INT_MAX;
        }

        q.push(src);
        dist[src]=0;

        while(!q.empty()){
            T node = q.front();
            cout<<node<<" ";
            q.pop();

            for(int nebor : adjList[node]){
                if(dist[nebor]==INT_MAX){
                    q.push(nebor);
                    dist[nebor]= dist[node]+1;
                    parent[nebor]=node;
                }
            }
        }
        cout<<"\n";

        for(auto i : adjList){
            T node = i.first;
            cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
        }
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
    
    g.print();
    g.shortestpathinUnweightedGraph(0);

    return 0;
}
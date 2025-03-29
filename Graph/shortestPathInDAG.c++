#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;


class Graph{
    public:
    unordered_map<int, list<pair<int,int>>> adj;


    void addEdge(int u,int v,int weight){
        pair<int,int> p = make_pair(v,weight);
        adj[u].push_back(p);
    }

    void printAdj(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }

    void dfs(int node,unordered_map<int,bool> &vis, stack<int> &s){
        vis[node] = true;
        for(auto nbr:adj[node]){
            if(!vis[nbr.first]){
                dfs(nbr.first,vis,s);
            }
        }

        s.push(node);
    }

    void getShortestPath(int src, stack<int> &s, vector<int> &dist){
        dist[src] = 0;
        while(!s.empty()){
            int top = s.top();
            s.pop();

            if(dist[top] != INT_MAX){
                for(auto nbr:adj[top]){
                    if(dist[top] + nbr.second < dist[nbr.first]){
                        dist[nbr.first] = dist[top] + nbr.second;
                    }
                }
            }
        }
    }



};

int main(){
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    // g.printAdj();

    int n = 6;
    //topological sort
    unordered_map<int,bool> vis;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            g.dfs(i,vis,s);
        }
    }

    int src = 1;
    vector<int> dist(n);
    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
    }

    g.getShortestPath(src,s,dist);
    cout<<"Shortest path from source "<<src<<endl;
    for(int i=0;i<n;i++){
        if(dist[i] == INT_MAX){
            cout<<"INF"<<" ";
        }else{
            cout<<dist[i]<<" ";
        }
    }

    return 0;
}

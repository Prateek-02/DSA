#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u,int v,bool direction){
        //direction = 0 means undirected
        //direction = 1 means directed

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0){
            //create an edge from v to u
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<< i.first << "-> ";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    
    int n;
    cout<<"Enter the number of nodes: ";
    cin >> n;

    int m;
    cout<<"Enter the number of edges: ";
    cin >> m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printAdjList();

    return 0;
}
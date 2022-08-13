#include<bits/stdc++.h>
using namespace std;


bool dfs(int vertex,int prev,vector<vector<int>> &g,vector<int> &ans,int V,vector<int> & visited){
    
    if(visited[vertex] == 1){
        return 0;
    }
    visited[vertex] = 1;
    for(auto x: g[vertex]){
        if(prev != x && visited[x] == 1) {
            return  1;
        }
        if(dfs(x,vertex,g,ans,V,visited)){
            return 1;
        }
    }
    // ans.push_back(vertex);
    return 0;
    
}

bool depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> g(V,vector<int>(0));
    
    for(int i=0;i<E;i++){
        g[edges[i][0]].push_back(edges[i][1]);
        g[edges[i][1]].push_back(edges[i][0]);
    }
    // sort every vector 
    for(int i=0;i<V;i++){
        sort(g[i].begin(),g[i].end());
    }
//     cout<<"g is "<<endl;
//     for(auto x: g){
//         for(auto y:x){
//             cout<<y<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
    vector<vector<int>> ans;
    vector<int> visited(V,0);
    vector<int> temp;
    bool t = 0;
    for(int i=0;i<V;i++){
        temp.clear();
        t =dfs(i,-1,g,temp,V,visited);
        if(t) return 1;
        if(!temp.empty()) ans.push_back(temp);
    }
    
    return t;
}
  
int main() 
{  
    int v,e;
    cin>>v>>e;
    vector<vector<int>> edges;
    int a,b;

    for (int i = 0; i < e; i++)
    {   
        cin>>a>>b;
        edges.push_back({a,b});
    }
    
    if(depthFirstSearch(v,e,edges))
    cout<<"True";
    else cout<<"False";
    
    cout<<endl;
    return 0;
  }
class Solution {
public:
    int BFS(int src, vector<vector<int>>& adj,vector<bool>&visited){
        queue<int>q;
        q.push(src);
        visited[src] = true;
        int count = 1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto v: adj[u]){ //Explore Nebighours
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
                    count++;
                }
            }
        }
        return count;
    }
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
    vector<vector<int>>adj(n);
    vector<bool>visited(n,false);
    for(int i =0;i<edges.size();i++){
    adj[edges[i][0]].push_back(edges[i][1]);
    adj[edges[i][1]].push_back(edges[i][0]);
    }
    for(int i=0;i<restricted.size();i++){
        visited[restricted[i]] = true;
    }
    int count = BFS(0,adj,visited);
    return count;
    }
};
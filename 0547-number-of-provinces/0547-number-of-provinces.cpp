class Solution {
public:
    void DFS(int src, vector<vector<int>>& isConnected, vector<bool>& visited){
        // Marked it visited
        visited[src] = true;
        
        int n = isConnected.size();
        // Call DFS for all non-visited neighbours
        for(int i= 0;i<n ;i++){
            if(isConnected[src][i] == 1 && visited[i]==false){
                DFS(i,isConnected,visited);
            }
        } 

    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        int count =0;

        for(int i=0; i<n; i++){
            if(visited[i] == false){
                DFS(i,isConnected,visited);
                count++;
            }
        }
        return count;
    }
};
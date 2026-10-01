class Solution {
public:
    void BFS(int src, vector<vector<int>>& isConnected,
             vector<bool>& visited) {

        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()) {

            int u = q.front();
            q.pop();

            for(int neb = 0; neb < isConnected[u].size(); neb++) {

                if(isConnected[u][neb] == 1 && !visited[neb]) {
                    q.push(neb);
                    visited[neb] = true;
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        vector<bool> visited(n, false);

        int count = 0;

        for(int i = 0; i < n; i++) {

            if(!visited[i]) {
                BFS(i, isConnected, visited);
                count++;
            }
        }

        return count;
    }
};
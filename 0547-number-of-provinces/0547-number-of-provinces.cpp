class Solution {
public:

    void dfs(int node, vector<bool> &vis, vector<vector<int>> &adj){

        vis[node]= true;
        for (int neighbor = 0; neighbor < adj.size(); neighbor++) {
            
            if (adj[node][neighbor] == 1 && !vis[neighbor]) {
                dfs(neighbor, vis, adj);
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V= isConnected.size();
        


        vector<bool> vis(V,false);
        int c=0;

        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfs(i, vis,isConnected);
                c++;
            }
        }

        return c;
    }
};
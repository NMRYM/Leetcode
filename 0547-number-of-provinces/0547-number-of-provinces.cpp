class Solution {
public:

    void dfs(int node, vector<bool> &vis, vector<vector<int>> adjj){

        vis[node] = true;
        for (int neighbor = 0; neighbor < adjj.size(); neighbor++) {
            
            if (adjj[node][neighbor] == 1 && !vis[neighbor]) {
                dfs(neighbor, vis, adjj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V= isConnected.size();
        

        vector<bool> vis(V, false);
        int c=0;

        for(int i = 0 ; i <V;i++){
             if(!vis[i]){
                c++;
                dfs(i,vis,isConnected);
             }
        }
        return c;
    }
};
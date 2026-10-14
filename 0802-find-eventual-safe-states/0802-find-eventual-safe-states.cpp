class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>> adj(graph.size());
        vector<int> ind(graph.size(),0);
        queue<int> q;
        for(int i = 0 ; i< graph.size() ; i++){
            for (int v : graph[i]) {
                adj[v].push_back(i); 
                ind[i]++;          
            }
        }

        for(int i = 0 ; i < graph.size() ; i++){
            if(ind[i] == 0){
                q.push(i);
            }
        }

        vector<int> safe;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            safe.push_back(node);

            for(auto j : adj[node]){
                ind[j]--;
                if(ind[j] == 0){
                    q.push(j);
                }
            }
            
        }
    sort(safe.begin(), safe.end());
        
        return safe;
    }
};
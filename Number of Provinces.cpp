void dfs(int node, vector<int> adj[], vector<int> &vis) {
        vis[node] = 1;
        
        for(int i = 0; i < adj[node].size(); i++) {
            if(!vis[adj[node][i]])
                dfs(adj[node][i], adj, vis);
            
        }
    }
    
    int numProvinces(vector<vector<int>> graph, int v) {
        vector<int> adj[v];
        
        for(int i = 0; i < v; i++) {
            for(int j = 0; j < v; j++) {
                if(graph[i][j] && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        
        int count = 0;
        vector<int> vis(v, 0);
        for(int i = 0; i < v; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis);
                count++;
            }
        }
        
        return count;
    }

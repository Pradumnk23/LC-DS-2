class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> &vis, vector<int> &ans, vector<int> adj[])
    {
        ans.push_back(node);
        vis[node]=1;
        for(auto it : adj[node])
        {
            if(!vis[it])
                dfs(it,vis,ans,adj);
        }
    }
    
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<int>vis(n,0);
        dfs(0,vis, ans, adj);
        return ans;
    }
};

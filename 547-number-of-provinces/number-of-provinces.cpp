class Solution {
public:

     void dfs(vector<vector<int>>& adj, vector<int>& check, int i){
        check[i]=1;
        for(auto it :adj[i]){
            if(!check[it]){
                dfs(adj,check,it);
            }
        }
     }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
       vector<vector<int>> adj(n);
// list build

        for(int i=0; i< n; i++){
            for(int j=0; j< n; j++)
            if(isConnected [i] [j] == 1 && i!=j){ // i & j eqyual undirected 
                { 
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        }

// no of province 
        vector <int> check(n,0);
        int count=0;
        for(int i=0; i< n;i++){
            if(check[i]== 0){ //all visted dfs apply 
            dfs(adj,check,i);
            count++;
            }
        }
   return count;

    }
};
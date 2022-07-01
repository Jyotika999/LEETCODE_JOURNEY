class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
  
          
        // kuch order ki baat hori hai
        // pehle kuch ingredients bnenge, then kuch bnenge
        // order matters,
        // recipes are interconnected
        // seems a graph
        // algo used seems to be of toposort 
        
        // it has to be a directed graph 
        
        // adj[bread] = {yeast, floor}
        // adj[sandwich] = {bread, meat}, pehle bread bnega fir sandwich 
        
        // make a directed graph
        // check orderin
        // g , if and only if cycle is not present 
        
        map<string , int>mp;
        
        for(int i=0;i<supplies.size();i++)
        {
            mp[supplies[i]]=1;
        }
        
        map<string,int>indegree; 
        map<string, vector<string>>graph;
        
        for(int i=0;i<recipes.size();i++)
        {
            indegree[recipes[i]]=0;
        }
        
        for(int i=0;i<recipes.size();i++)
        {
            string cur_recipe = recipes[i];
            
            for(int j=0;j<ingredients[i].size();j++)
            {
                string cur_ingredient = ingredients[i][j];
                if(mp[cur_ingredient]==0)
                {
                    indegree[cur_recipe]++;
                    graph[cur_ingredient].push_back(cur_recipe);
                }
                
            }
        }
        
        
       queue<string>q;
        
        for(auto it : indegree)
        {
            if(it.second == 0)
            {
                q.push(it.first);
            }
        }
        
        vector<string>ans;
        while(!q.empty())
        {
            string cur = q.front();
            q.pop();
            ans.push_back(cur);
            for(auto child : graph[cur])
            {
                indegree[child]--;
                if(indegree[child]==0)
                {
                    q.push(child);
                }
            }
        }
        
        return ans; 
        
        
        
        
    }
};
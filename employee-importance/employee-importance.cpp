/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    vector<int>graph[2005];
    int importance[2005];
    bool vis[2005];
     int total =0;
    
    void dfs( int emp)
    {
        total = total + importance[emp];
        vis[emp]=1;
        //cout<<importance[emp]<<" \n";
       // cout<<emp<<"\n";
        
        for(auto sub :  graph[emp])
        {
            if(vis[sub]==0)
            {
                dfs( sub);
            }
        }
        return;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        
        
        memset(vis, 0, sizeof(vis));
        
        int total_employees = employees.size();
        
        for(int cur=0;cur<total_employees;cur++)
        {
            int cur_emp = employees[cur]->id;
            vector<int>sub = employees[cur]->subordinates;
            importance[cur_emp] = employees[cur]->importance;
            
          //  cout<<cur_emp<<" :";
            for(int i=0;i<sub.size();i++)
            {
              //  cout<<sub[i]<<" ";
                graph[cur_emp].push_back(sub[i]);
            }
         //   cout<<"\n";
        }
        
       
        dfs( id);
        
        return total;
        
    }
};
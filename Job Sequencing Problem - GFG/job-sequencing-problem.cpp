// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    
    static bool cmp(Job a, Job b)
    {
        // if(a.dead!=b.dead)
        // return a.dead<b.dead;
        // else
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        
    //     (1, 3, 1000), (2, 2, 600), (3, 1, 400), (4, 3, 100)
    //     400+600+1000 > 2000
    //     sort acc to mindays , sort acc to maxprofit 
        
    //   (5, 1, 500),  (3, 1 , 400), (2, 2, 600), (1, 3, 1000), (4, 3, 100)
       
       sort(arr, arr+n, cmp);
        
        int day=0;
        int maxprofit=0;
        vector<int>vis(105, -1);
        
        
        int totaldays=0;
        for(int i=0;i<n;i++)
        {
            int maxday = arr[i].dead;
            
            for(int day=maxday;day>=1;day--)
            {
                if(vis[day]==-1)
                {
                    maxprofit+= arr[i].profit;
                    vis[day]=i;
                    totaldays++;
                    break;
                }
            }
            
           
        }
        
        vector<int>ans;
        ans.push_back(totaldays);
        ans.push_back(maxprofit);
        return ans;
        
    //                      600 +       400 +     100 = 1100 >1000 
                         
    //       3000,    1200,   400,   300
    //       sort acc to max profit , acc to min days 
    //       (1, 3, 1000), (2, 2, 600), (3, 1, 400), (4, 3, 100)   
          
          
        
        
        
        // [(1, 1, 100), (2, 1, )]
        
        // job 1 = 4,  20
        // job 2 = 1, 10
        // job 3 = 1, 40
        // job 4 = 1, 30
        
        
        // [(3, 1, 40) , (4, 1, 30) , (1, 4, 20), (2, 1, 10)]
        // 40 + 20 = 60
        
        
        
        
        // (1, 2, 100), (3,2, 27), (4, 1, 25), (2, 1, 19), (5, 1, 15)
        
        // (4, 1, 25), (2, 1, 19), (5, 1, 15), (1, 2, 100), (3, 2, 27)
        
        
        
        
        
        // day1 = 100
        // day2 = 27
        // 100+27 = 127 
        
        
        
        
        
        
        
        
        
        
        
        
        
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
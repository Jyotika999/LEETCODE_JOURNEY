// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int ct=0;
    
    static bool cmp(pair<int,int>&a, pair<int,int>&b)
    {
        return b.second>a.second;
    }
    
    
    void func(vector<pair<int,int>>v)
    {
        if(v.size()==0)
        return ;
        int prevend=-1;
        ct++;
        for(int i=0;i<v.size();)
        {
            if(v[i].first > prevend)
            {
                prevend = v[i].second;
                v.erase(v.begin()+i);
            }
            else
            i++;
        }
        if(v.size()!=0)
        func(v);
    }
    
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    // 	train scedules = {(0900, 0910) , (0940, 1200), (0950, 1120), (1100, 1130), (1500, 1900), (1800, 2000)}
    	
    // 	p1 = (0900, 0910) -> (0940, 1200) -> (1500, 1900) -> ..
    // 	p2 = (1100, 1130) -> (1800, 2000)
    // 	p3 = (0950, 1120)
    	
    // 	3 total platforms
    
        ct=0;
       // sort acc to end
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i], dep[i]});
        }
        
        sort(v.begin(), v.end());
    
        func(v);
        return ct;
    
    	
    	
    	
    	
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
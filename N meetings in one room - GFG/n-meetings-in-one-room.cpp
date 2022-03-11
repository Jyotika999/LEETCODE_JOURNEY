// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool cmp(pair<int,int>a, pair<int,int>b)
    {
        return b.second>a.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        
        vector<pair<int, int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({start[i], end[i]});
        }
        
        sort(v.begin(), v.end(), cmp);
        
        int ct=0;
        int prevend = -1;
        
        for(int i=0;i<n;i++)
        {
            if(v[i].first > prevend)
            {
                ct++;
                prevend = v[i].second;
            }
        }
        return ct;
        
        
        // // ds[]={(0, 1), (4, 5), (2, 3)} max= 2
        // ds[] = {(0, 1), (2, 3), (4, 5)}
        // // 0,1 -> 2, 3 -> 4, 5           max=3
        
        
        
        // ds[] = {(0, 6), (1, 2), (3, 4), (5, 6)}
        
        // start[i]<=end[i]
        // if sort acc to endtime
        // ds[] = {(1, 2) , (3, 4), (5, 6), (0, 6)}
        // ans = 3
        
        
        
        // 1,2 -> 3, 4 -> 5, 6 , maxmeets = 3
        
        
        
        
        
        // // ds[]={(1,2) , (3, 4) , (0,6), (5, 7), (8, 9), (5, 9)}
        //   sorted to end
        //   ans = 4
        
        
        // // sort first on basis of start , then on basis of end 
        // // ds[]={(0, 6), (1, 2), (3, 4) , (5, 7) , (5, 9) , (8, 9)}
        
        // // prev_endtime <= current_starttime
        // // ct++, update endtime , starttime 
        // // brute force : 0(n*n +  nlogn) = O(n*n)
        
        // // for(int cur=0; cur<n;cur++)
        // // {
            
        // // }
        
        // ds[] = {(10, 20) , (12, 25) , (20, 30)}
        // sorted acc to end 
        // ans = 1
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
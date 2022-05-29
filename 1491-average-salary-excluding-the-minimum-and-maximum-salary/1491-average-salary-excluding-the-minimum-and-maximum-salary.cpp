class Solution {
public:
    double average(vector<int>& salary) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        double sum=0;
        int n = salary.size();
        
        for(int i=0;i<n;i++)
        {
            sum+= salary[i];
            mini = min(mini, salary[i]);
            maxi = max(maxi, salary[i]);
        }
        
        double ans = (sum-mini-maxi)/(n-2);
        // cout<<sum<<" "<<mini<<" "<<maxi<<" "<<n<<"\n";
        return ans;
        
        
    }
};
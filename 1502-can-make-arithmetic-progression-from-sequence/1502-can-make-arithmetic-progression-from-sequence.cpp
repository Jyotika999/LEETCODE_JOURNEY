class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int  n = arr.size();
        sort(arr.begin(), arr.end());
        
        int d = arr[1]-arr[0];
        for(int i=1;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[i-1]<<"\n";
            if(arr[i]-arr[i-1]==d)
                continue;
            else
                return false;
        }
   return true;     
        
    }
};


// 1, 5
// 5-1 = 4
// 4/2 = 2
// dif of ther elements = 2
// sort in asc or in desc 

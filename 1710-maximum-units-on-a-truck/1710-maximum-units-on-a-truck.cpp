class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        int a1 = a[0];
        int a2 = a[1];
        int b1 = b[0];
        int b2 = b[1];
        
        if(a2!=b2)
        return a2>b2;
        else 
        return a1<a2; 

    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
 
        // truck size fixed
        // max number of boxes fixed 
        // maximise total units put on truck 
        // sort according to more number of units 
        // ex : = [[5,10],[2,5],[4,7],[3,9]]
        // sorted array = [[5, 10] , [3, 9] , [4, 7], [2, 5]]
        // truck = 10
        // 10*5+9*3+7*2 = 50+27+14 = 91 
        
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        
        int ans=0;
        int n = boxTypes.size();
        for(int i=0;i<n;i++)
        {
            int mini = min(truckSize, boxTypes[i][0]);
            ans+= mini*boxTypes[i][1];
            truckSize -= mini;
        }
        
        return ans;
        
        
        
    }
};
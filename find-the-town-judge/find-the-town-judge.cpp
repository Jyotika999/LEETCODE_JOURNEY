class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         if(n==1)return 1;
        int outgoing[10001];
        int incoming[10001];
        
        memset(outgoing, 0, sizeof(outgoing));
        memset(incoming, 0, sizeof(incoming));
        for(int i=0;i<trust.size();i++)
        {
            outgoing[trust[i][0]]++;
            incoming[trust[i][1]]++;
        }
        
        for(int i=0;i<=n;i++)
        {
            if(incoming[i]==(n-1) && outgoing[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};
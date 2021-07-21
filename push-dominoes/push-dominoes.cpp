class Solution {
public:
    string pushDominoes(string dominoes) {
        
        int n = dominoes.size();
        
        int left[n];
        int right[n];
        
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        
        int nearest_left = -1;
        int nearest_right = -1;
        
        for(int i=n-1;i>=0;i--)
        {
            if(dominoes[i]=='L')
            {
                nearest_left  = i;
            }
            if(dominoes[i]=='R')
            {
                nearest_left = -1;
            }
            left[i] = nearest_left;
        }
        
        
        for(int i=0;i<n;i++){
            
            if(dominoes[i]=='L')
            {
                nearest_right = -1;
            }
            if(dominoes[i]=='R')
            {
                nearest_right = i;
            }
            right[i] = nearest_right;
        }
        
        
        string ans;
        
        for(int i=0;i<n;i++)
        {
            if(dominoes[i]=='.')
            {
                int leftdis = left[i];
                int rightdis = right[i];
                
                if(leftdis!=-1)
                {
                    leftdis = abs( i  -  leftdis);
                }
                else
                {
                    leftdis = INT_MAX;
                }
                if(rightdis!=-1)
                {
                    rightdis = abs(rightdis - i);
                }
                else
                {
                    rightdis = INT_MAX;
                }
                
                if(leftdis == rightdis)
                {
                    ans.push_back('.');
                }
                else if(leftdis < rightdis)
                {
                    ans.push_back('L');
                }
                else{
                    ans.push_back('R');
                }
                
            }
            else if(dominoes[i]=='L')
            {
                ans.push_back('L');
            }
            else
            {
                ans.push_back('R');
            }
        }
        
        return ans;
       
    }
};
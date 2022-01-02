
// (a+b)%60==0
// a%60 + b%60 =0
// (a%60 + b%60)%60 =0
// dividend = a%60 + b%60
// divisor = 60
// rem = 0
    
// hence using the theorem 
// dividend = divisor*q + rem
// a%60+b%60 = 60*q + 0
// a%60 = 60-b%60
// hence this problem becomes a 2 sum problem



class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        unordered_map<int,int>mp;
        
        int ct=0;
        
        int t=time.size();
        for(int i=0;i<t;i++)
        {
            if(time[i]%60==0)
                ct+=mp[0];
            else
                ct+=mp[60-(time[i]%60)];;

            mp[time[i]%60]++;
            
        }

       
        
        return ct;
    }
};
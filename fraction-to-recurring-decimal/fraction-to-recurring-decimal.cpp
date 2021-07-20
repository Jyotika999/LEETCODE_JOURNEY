class Solution {
public:
    string fractionToDecimal(long long int n, long long int d ) {
        
        string ans = "";
        
        if(n<0 && d<0)
        {
            n = abs(n);
            d = abs(d);
           
        }
        else if(n<0)
        {
            n = abs(n);
            d = abs(d);
            if(n!=0)
            ans = ans + "-";
            cout<<n<<" "<<d<<" "<<ans<<"\n";
        }
        else if(d<0)
        {
             n = abs(n);
             d = abs(d);
            if(n!=0)
            ans = ans + "-";
        }
        
       // cout<<n<<" "<<d<<"\n";
        long long int q = n/d;
        long long int r = n%d;
        
        map<int,int>mp;
        ans = ans + to_string(q);
        
        if(r==0)
        {
            return ans;
        }
        else
        {
            ans = ans + ".";
            
            while(r!=0)
            {
                
                //cout<<r<<" "<<q<<"\n";
                
                if(mp[r])
                {
                    long long int len = mp[r];
                    ans= ans.substr(0, len) + "(" + ans.substr(len, ans.size());
                    ans.push_back(')');
                    break;
                }
                
                
                else
                {
                    mp[r] = ans.length();
                    r = r *10;
                  
                    q = r / d;
                    q = abs(q);
                    r = r % d;
                     
                    ans = ans + to_string(q);
                    
                }
               
            }
            
        }
        
        return ans;
        
    }
};
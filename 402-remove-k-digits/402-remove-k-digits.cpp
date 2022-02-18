class Solution {
public:
    // a beautiful concept on monotonic stack
    // we observe that we should keep the smaller elements at the most significant digit
    // we will use a data structure to keep a track, that if a greater element is already there , then pop that elemnet and push the current elemnet 
    // hence we should keep on removing as soon as a bigger element is already present in the data structure
    // what data structure should i use?
    // since i need to keep track of the latest bigger elemenet just inserted before the current element , hence last in , first out , would be a better option , right?
    // so we use stack for the same 
    // at the end if k is still non zero, which means you can delete the elements still
    // then keep popping from back till k  is 0, since your stack is already filled with increaing order of elements 
    // 
    
    string removeKdigits(string num, int k) {
    
        int n = num.length();
        
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            int cur = num[i]-'0';
            while(k>0 and s.size()>=1 and s.top()>cur)
            {
                s.pop();
                k--;
            }
            s.push(cur);
        }
        
        while(k--)
        {
            s.pop();
        }
        string ans="";
        while(!s.empty())
        {
            ans+= to_string(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        
        // cout<<ans<<"\n";
        cout<<ans.size()<<"\n";
       
        while(ans.size()>=1 and ans.front()=='0')
        {

            ans.erase(ans.begin()); 
        
        }
        if(ans.size()==0)
            return "0";
        return ans;
        
    }
};
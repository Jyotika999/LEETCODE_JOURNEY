class Solution {
public:
    
    int binary_to_decimal(string s)
    {
        int num=0;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            num=num*2+(s[i]-'0');
        }
        return num;
    }
    int findComplement(int num) {
        
        string s="";
        
        while(num)
        {
            if(num%2==0)
            {
                s+="1";
            }
            else
            {
                s+="0";
            }
            num/=2;
        }
        reverse(s.begin(), s.end());
        
        cout<<s<<"\n";
        // return 0;
         return binary_to_decimal(s);
        
        
        
        
    }
};
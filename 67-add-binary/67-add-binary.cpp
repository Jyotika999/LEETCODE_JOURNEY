class Solution {
public:
    string addBinary(string a, string b) {
          int na = a.length();
      int nb = b.length();
        
      int carry=0;
      int sum=0;
        
      string res="";
        
        
        na--;
        nb--;
        
        while(na>=0 || nb>=0)
        {
            int val1=0, val2=0;
            if(na>=0)
             val1 = a[na]-'0';
            
            if(nb>=0)
            val2 = b[nb]-'0';
            
            
            sum = (val1 + val2+carry)%2;
            carry = (val1 + val2 + carry)/2;
            
            res+= (sum)+'0';
            
            na--;
            nb--;
            
            
            
        }
        
        if(carry)res+='1';
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};
class Solution {
public:
    
    
    
    map< char, string>mp;

    vector<string>possible_combinations;
   
    void generate_Combinations( string s , int len , string cur)
    {
        if(len == s.length() ) 
        {
            possible_combinations.push_back( cur);
            return ;
        }

        for(int i=0 ; i< mp[s[len]].length(); i++)
        {
            char current_mapping = mp[s[len]][i];
            cur.push_back( current_mapping);
            generate_Combinations(s, len+1, cur);
            cur.pop_back();
        }

    }        

          
    vector<string> letterCombinations(string s) {
        
       
        
        mp[' '] = "";
        mp['2'] = "abc";
        mp['3'] =  "def";
        mp['4'] = "ghi";
        mp['5'] =  "jkl";
        mp['6'] = "mno";
        mp['7'] =  "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

  
        possible_combinations.clear();
        
        
        
         if(s=="")
            return possible_combinations;
        
        
        int len = s.length();
        generate_Combinations( s, 0, "");
        return possible_combinations;
    }
};




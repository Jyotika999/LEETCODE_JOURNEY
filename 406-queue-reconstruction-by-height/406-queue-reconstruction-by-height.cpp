class Solution {
public:
    
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        int h1 = a[0];
        int k1 = a[1];
        int h2 = b[0];
        int k2 = b[1];
        
        if(h1!=h2)
            return h2<h1;
        
        else
        
            return k1<k2;
        
            
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin(), people.end(), cmp);
        
        // ab hmein elements ko insert krna hoga 
        // since after sorting hmare pass sare elements aajayenge sorted in descending order
            
        // toh ab hmein elements ko insert krna hoga, on the basis of ki kitne elements hai jo iss current element se bde h
        
        vector<vector<int>>ans;
        
        for(auto it : people)
        {
            ans.insert(ans.begin()+it[1], it); // first parameter in insert function when used with a vector will depict the position jha pe apko current elment rkhna h, second parameter is jo element hmein insert krna h 
            
        }
        
        return ans;
        // lets dry run 
        // after sorting array becomes 
        // [[7,0],[7,1],[6,1],[5,0],[5,2],[4,4]] 
        // ans = [7, 0]
        // ans = [7, 0], [7, 1]
        // ab 6 ko insert krna h , lekin ek hee element bda honga chahuye 
        // ans = [7, 0] , [6, 1] , [7, 1]
        // insert [5, 0] 
        // ab 5 se bda koi element hee ni h 
        // ans = [5, 0] , [7, 0], [6, 1] [7, 1]
        // ab [5, 2] ko insert krna h 
        // isse aage 2 elements bde hone chahiye
        // ans = [5, 0] , [7, 0], [5, 2] , [6, 1], [7, 1]
        // ab yhan pe pta lgega tumko sort krne ka fayda ki humne highest k according kyu sort kra  h 
        // kyuki humein bus elements ko khiskana h , pushback yeh kaam ni kr skta , hence comes the use of insert function 
        
        
        
        
        
        
        
    }
};


// sort on basis of height jiski bdee h 
// kyuki bdee height wale apne ko start mein rkhna hoga 
// agar height same h , toh sort krenge apn according to k 
// jiska k chota usko apne ko aage rkhna hoga 

// people[i] = {height[i], people having greater or equal height}

// [[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]
// person[0] = height = 7, k = 0
// person[1] = height = 4, k=4
// person[2] = height = 7, k = 1
// person[3] = height = 5, k=0
// person[4] = height = 6, k=1
// person[5] = height = 5, k = 2

// heights = [7, 4, 7, 5, 6, 5]
// upper bd= [0, 4, 1, 0, 1, 2]

// index = 0, bnda = 5
// index = 1, bnda = 7
// index = 2, bnda = 5
// index = 3, bnda = 6
// index = 4, bnda = 4
// index = 5, bnda = 7




// [6,0],[5,0],[4,0],[3,2],[2,2],[1,4]
// heights possible = [1, 2, 3, 4, 5, 6]
// upper bound is   = [4, 2, 2, 0, 0, 0]

// (4,0) , (5, 0) , (2, 2) , (3,2) , (1, 4) , (6, 0)


// index = 0, bnda = 4 
// index = 1, bnda = 5
// index = 2, bnda = 2
// index = 3, bnda = 3
// index = 4, bnda =  1 
// index = 5, bnda = 6



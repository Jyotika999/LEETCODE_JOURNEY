class MyCalendar {
public:
    
    vector<pair<int,int>>s;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        // auto it = s.lower_bound({start, end});
        
        for(auto it=s.begin();it!=s.end();it++)
        {
        int ff = it->first;
        int ss = it->second;
        
            // cout<<ff<<" "<<ss<<" "<<start<<" "<<end<<"\n";
        if(!(end<=ff) and !(ss<=start))
        {
            cout<<"hi\n";
            return false;
        }
        
    
        }
        
        s.push_back({start, end});
        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
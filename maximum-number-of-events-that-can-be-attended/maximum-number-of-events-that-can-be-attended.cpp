class Solution {
public:
    void print(int i , priority_queue<int , vector<int> , greater<int>> pq){
        cout<<i<<endl;;
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();
        vector<pair<int,int>> vp;
        int LAST_VALUE = 0;
        for(auto c:events){
            vp.push_back({c[0],c[1]});
            LAST_VALUE = max(LAST_VALUE , c[1]);
        }
        sort(vp.begin(),vp.end());
        priority_queue<int , vector<int> , greater<int>> pq;
        int count =0 ;
        int j=0;
        for(int i=1;i<=LAST_VALUE;i++){
            while(j<n and vp[j].first==i){
                pq.push(vp[j].second);
                j++;
            }   
            if(!pq.empty()){
                pq.pop();
                count++;
            }
            while(!pq.empty() and pq.top()==i){
                pq.pop();
            }
            // print(i, pq);
        }
        return count;
        
    }
};
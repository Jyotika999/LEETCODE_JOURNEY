class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        
        
        // pushing the indices so that , the original indices do not get lost after sorting the vector 
        for(int t=0; t<times.size(); t++)
        {
            times[t].push_back(t);
        }
        
        // time array is sorted according to their arrival times
        sort(times.begin() , times.end());
        
        // min heap of {departure, index}
        priority_queue< pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > busy_chairs;
        
        // min heap of index of unoccupied chairs , depicting they are free and should be addreesed first
        priority_queue<int, vector<int> , greater<int> >free_chairs;
        
        int total_chairs =0;
        
        for(int cur = 0; cur< times.size() ; cur++)
        {
            int arrival_time = times[cur][0];
            int depart_time  = times[cur][1];
            int friend_index = times[cur][2];
            
            // if there was some friend whi had occupied a chair and needs to leave now , as his departure time was less than the arrival time of the current friend
            
            while( !busy_chairs.empty() and (busy_chairs.top().first <= arrival_time))
            {
                int busy_chair_index = busy_chairs.top().second;
                busy_chairs.pop();
                free_chairs.push(busy_chair_index);
            }
           
            // no free chair , then assign one chair and mark it as busy 
                if(free_chairs.empty())
                {
                   if(friend_index == targetFriend)
                       return total_chairs;
                    
                    busy_chairs.push({depart_time, total_chairs});
                     total_chairs++;
                }
                else
                {
                    // if there is some free chair , pop it and mark it busy
                    int cur_free_index = free_chairs.top();
                    
                    if(friend_index == targetFriend)
                        return cur_free_index;
                    
                    busy_chairs.push({depart_time, cur_free_index});
                    free_chairs.pop();
                }
                
                
            
        }
        
        
        
        
        
        
        
        
        return 0;
        
    }
};
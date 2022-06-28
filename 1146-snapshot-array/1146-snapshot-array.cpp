class SnapshotArray {
public:
    vector<map<int,int>>snapshot;
    int snapid=0;
    
    SnapshotArray(int length) {
        // initialises data structure 
        snapshot.resize(length);
    }
    
    void set(int index, int val) {
        // sets element at given index to val
        // cout<<index<<" "<<val<<" "<<snapid<<"\n";
        snapshot[index][snapid]=val;
    }
    
    int snap() {
        int val  = snapid;
        snapid++;
        return val;
        // returns snapid
    }
    
    int get(int index, int snap_id) {
        
        
        while(snap_id>=0 and snapshot[index].count(snap_id)==0)
        {
            snap_id--;
            if(snap_id==-1)
            {
                // was never updated
                return 0;
            }
        }
        return snapshot[index][snap_id];
        
        
        // return snapshot[index][snap_id];
        // when SNAPID = snap_id , then what was value at this index in the data structure 
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
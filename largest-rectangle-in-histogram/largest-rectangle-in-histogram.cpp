class Solution {
public:
    int largestRectangleArea(vector<int>& ar) {
        // nearest smaller to left 
	stack<pair<int,int>>left;
	vector<int>l;
	int n = ar.size();
        if(n==0)return 0;
	for(int i=0;i<n;i++)
	{
		if(left.empty()) l.push_back(-1);
		else if(!left.empty() && (left.top().first<ar[i])) l.push_back(left.top().second);
		else {
			while(!left.empty() && (left.top().first>=ar[i]))left.pop();
			
			if(left.empty()) l.push_back(-1);
			else l.push_back(left.top().second);
		}
		left.push({ar[i], i});
	}
	//for(ll i=0;i<l.size();i++)cout<<l[i]<<" ";
	
	
	// nearest smaller to right
	stack<pair<int,int>>rightt;
	vector<int>r;
	
	for(int i=n-1;i>=0;i--)
	{
		if(rightt.empty()) r.push_back(n);
		else if(!rightt.empty() && (rightt.top().first<ar[i])) r.push_back(rightt.top().second);
		else
		{
			while(!rightt.empty() && (rightt.top().first>=ar[i])) rightt.pop();
			
			if(rightt.empty())r.push_back(n);
			else r.push_back(rightt.top().second);
		}
		rightt.push({ar[i],i});
		
	}
	reverse(r.begin(), r.end());
	//for(ll i=0;i<(ll)r.size();i++) cout<<r[i]<<" ";
	
        // width = next smaller right - next smaller left - 1 
	int width[n];
	for(int i=0;i<n;i++)width[i] = abs(r[i]-l[i])-1;
	int maxi_area=0;
	
        // area = width * ar[i]
	for(int i=0;i<n;i++)
	{
		int cur_area = width[i] *  ar[i];
		maxi_area = max(maxi_area , cur_area);
	}
	
	
	//cout<<maxi_area<<"\n";
	return maxi_area;
        
        
        
        
    }
};
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    static bool cmp(Item a , Item b)
    {
        double a1 = (double)a.value/(double)a.weight;
        double b1 = (double)b.value/(double)b.weight;
        
        return a1>b1;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        sort(arr, arr+n, cmp);
        double maxvalue=0.0;
        int curwt=0;
        
        for(int i=0;i<n;i++)
        {
            if(curwt + arr[i].weight<=W)
            {
                maxvalue+= arr[i].value;
                curwt+=arr[i].weight;
                
            }
            else
            {
                int left = W - curwt;
                maxvalue += (double)arr[i].value*(double)left/(double)arr[i].weight;
                break;
            }
        }
        return maxvalue;
        
        
        
    }
    
    
    
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
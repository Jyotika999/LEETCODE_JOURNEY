



class Solution {
public:
        bool  delivarable_intime( int   cur_wt, vector<int>&weights,  int  required_days )
    {
            int sum_wts =0;
            int days=1;
            for( int wt =0 ; wt< weights.size() ; wt++)
            {
                if( weights[ wt] > cur_wt )
                    return false;
                if( sum_wts + weights[wt ] <= cur_wt)
                {
                    sum_wts = sum_wts + weights[wt];
                }
                else
                {
                    days++;
                    if( weights[ wt] > cur_wt )
                    return false;

                    sum_wts =  weights[ wt];
                }
            }

        if( days<= required_days) return true;
        else return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
	int total_weights = weights.size();
	int sum_weights = 0;
	for( int cur_weight = 0; cur_weight < total_weights ; cur_weight++)
	{
		sum_weights = sum_weights + weights[ cur_weight ] ;
	}

	int low_wt = 0;
	int high_wt = sum_weights;
	int min_wt =0;

	while ( low_wt <= high_wt) 
	{
		int mid_wt = (low_wt + high_wt )/2;
		if( delivarable_intime( mid_wt, weights, days ))
		{
			min_wt = mid_wt ; 
			high_wt = mid_wt -1;
		}
		else
		{
			low_wt = mid_wt + 1;
		}

	}
	return min_wt;
    }
};

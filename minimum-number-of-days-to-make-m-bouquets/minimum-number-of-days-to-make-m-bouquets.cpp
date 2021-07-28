class Solution {
public:
   int  make_boques( int   cur_day, vector<int>&bloomday,  int k )
        {
            int count_boq =0;
            int flowers = bloomday.size();
            int consecutive_flower = 0;
            for( int cur_flower =0 ; cur_flower< flowers ; cur_flower++)
            {
                if( bloomday[cur_flower] <= cur_day)
                {
                    consecutive_flower++;
                   
                }
                else
                {
                   
                    consecutive_flower =0;
                }	
                
                         if(consecutive_flower == k)
                            {	
                                count_boq++;
                                consecutive_flower = 0;
                            }

                
            }
       
       
            
            return count_boq; 
        }
    
    
    int minDays(vector<int>& bloomday, int m, int k) {
        
   	     int flowers = bloomday.size();
   	    int maxday = 0;

	    for( int cur_flower =0 ; cur_flower< flowers ; cur_flower++)
        	  	        maxday = max( maxday , bloomday[cur_flower]);  


            int start_day = 0;
            int end_day = maxday ;
            int min_days_required = -1;
            while( start_day <= end_day)
            {
                int mid_day = (start_day + end_day)/2;
                cout<<mid_day<<" "<<make_boques(mid_day, bloomday, k)<<"\n";
                if( make_boques( mid_day, bloomday, k ) < m)
                {
                    start_day = mid_day + 1;
                }
                else
                {
                    min_days_required = mid_day;
                    end_day = mid_day -1;
                }
            }
	
           return min_days_required;  
    }
};



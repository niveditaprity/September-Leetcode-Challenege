class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int minute,hour;
        int max_time=-1;
        sort(A.begin(),A.end());
        do
        {
            int hour=A[0]+10*A[1];
            int minute=A[2]+10*A[3];
            if(hour<24&&minute<60)
            {
                int next_time=hour*60+minute;
            if(max_time<next_time)
            {
                max_time=next_time;
            }
            }
        }while(next_permutation(A.begin(),A.end()));
        if(max_time==-1)
        {
            return "";
        }
        else{
            ostringstream strsstream;
            strsstream<<setw(2)<<setfill('0')<<max_time/60<<":"<<setw(2)<<setfill('0')<<max_time%60;
            return strsstream.str();
        }
        
    }
};

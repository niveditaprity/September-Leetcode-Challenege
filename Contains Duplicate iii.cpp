class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        int x1=0;
        int x2=1;
        int n=nums.size();
        while(x2<n)
        {
          long long  int t1=v[x1].first;
           long long int t2=v[x2].first;
            if(abs(v[x1].second-v[x2].second)<=k&&abs(t1-t2)<=t)
            {
                return true;
            }
            if(abs(t1-t2)>t)
            {
                x1++;
            }
            if(abs(v[x1].second-v[x2].second)>k)
            {
                x2++;
            }
            if(x1==x2)
            {
                x2++;
            }
            
        }
        return false;
        
    }
};

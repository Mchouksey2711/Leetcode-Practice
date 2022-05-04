class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==0)
            return nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        int cur_max=0,max_sum=INT_MIN, min_sum=INT_MAX, cur_min=0;
        for(int i=0;i<nums.size();i++)
        {
            cur_max+=nums[i];
            max_sum=max(max_sum, cur_max);
            if(cur_max<0)
                cur_max=0;
            
            cur_min+=nums[i];
            min_sum=min(min_sum, cur_min);
            if(cur_min>0)
                cur_min=0;
        }
        if(cur_min==sum)
            return max_sum;
        return max(max_sum, sum-min_sum);
        
    }
};
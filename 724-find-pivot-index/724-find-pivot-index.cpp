class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum=0;
        int left_sum=0;
        
        for(int i=0; i<nums.size(); i++)
            total_sum+= nums[i];
        
        for(int i=0; i<nums.size(); i++) {
            if(left_sum == total_sum-nums[i]-left_sum)
                return i;
            left_sum+= nums[i];    
        }
        return -1;
    }
};
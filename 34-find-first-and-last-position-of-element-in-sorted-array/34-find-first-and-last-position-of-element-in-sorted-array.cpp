int first_pos(vector<int>& nums, int target){
      int start=0;
      int end=nums.size()-1;
      int mid= start + (end-start)/2;
      int ans=-1;
        
      while(start <= end){
          if(nums[mid] == target){
              ans = mid;
              end = mid-1;
          }
          else if(target > nums[mid])
              start = mid+1;
          else
              end = mid-1;
            
          mid= start + (end-start)/2;
      }
      return ans;
}
int last_pos(vector<int>& nums, int target){
    int start=0;
    int end=nums.size()-1;
    int mid= start+ (end-start)/2;
    int ans=-1;
        
    while(start <= end){
        if(nums[mid] == target){
            ans=mid;
            start=mid+1;
        }
        else if(target > nums[mid])
            start = mid+1;
        else
            end = mid-1;
            
        mid= start + (end- start)/2;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> v;
        v.push_back(first_pos(nums, target));
        v.push_back(last_pos(nums, target));
        
        return v;
    }
};
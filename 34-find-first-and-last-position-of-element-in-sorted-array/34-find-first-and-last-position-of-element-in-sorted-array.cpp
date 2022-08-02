int first_pos(vector<int>& nums, int target){
      int l=0;
      int h=nums.size()-1;
      int mid= l+ (h-l)/2;
      int ans=-1;
        
      while(l<=h){
          if(nums[mid] == target){
              ans=mid;
              h=mid-1;
          }
          else if(target > nums[mid])
              l=mid+1;
          else
              h=mid-1;
            
          mid= l+ (h-l)/2;
      }
      return ans;
}
int last_pos(vector<int>& nums, int target){
    int l=0;
    int h=nums.size()-1;
    int mid= l+ (h-l)/2;
    int ans=-1;
        
    while(l<=h){
        if(nums[mid] == target){
            ans=mid;
            l=mid+1;
        }
        else if(target > nums[mid])
            l=mid+1;
        else
            h=mid-1;
            
        mid= l+ (h-l)/2;
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
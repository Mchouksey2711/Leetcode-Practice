/*int getpivot(vector<int>& arr, int n){
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    while(s < e) {
        if(arr[mid] >= arr[0])
            s= mid+1;
        else
            e= mid;
        mid= s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>& arr , int s, int e, int key){
    int start= s;
    int end= e;
    int mid= start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            start= mid+1;
        else
            end= mid-1;
        mid= start + (end-start)/2;
    }
    return -1;
}
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
   /*   int n= nums.size();
        int pivot = getpivot(nums, n );
        if(target >= nums[pivot] && target <= nums[n-1])
           return binarySearch(nums, pivot, n-1, target);
        else
           return binarySearch(nums, 0, pivot-1, target);
    }
    */
    
        int beg=0,end=nums.size()-1,mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[beg]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[beg])
                    end=mid-1;
                else
                    beg=mid+1;
            }
            
            else
            {
                if(target>=nums[mid] && target<=nums[end])
                   beg=mid+1;
                else
                    end=mid-1;
            }
            
        }
        return -1;
    }
};
    
    
    
    
    
    
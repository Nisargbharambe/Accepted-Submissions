class Solution {
public:
    int BinarySearch(vector<int>& nums, int low, int high, int target){
        while(low <= high){
                int mid = low + (high - low)/2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < target)
                    low = mid + 1;
                else if(nums[mid] > target)
                    high = mid - 1;
            }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
     
        int low = 0 , high = nums.size() - 1;
        int minpos;
        
        if(nums.size() == 0)
            return -1;
        
        // This while finds the smallest element.(Pivot)
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[nums.size() - 1])
                low = mid + 1;
            else if(nums[mid] <= nums[nums.size() - 1])
            {
                high = mid - 1;
                minpos = mid;   
            }    
        }
        
        // Now, element will either lie to the left of pivot, or to the right of pivot.
        
        if(target <= nums[nums.size() -1])
            return BinarySearch(nums, minpos, nums.size() - 1, target);
       
        else if(target > nums[nums.size() - 1])
            return BinarySearch(nums, 0, minpos -1, target);    
     
        return -1;   
    }
};

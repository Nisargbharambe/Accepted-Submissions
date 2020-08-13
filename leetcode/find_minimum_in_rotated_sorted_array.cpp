class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int low = 0; 
        int high = nums.size() -1;
        int minpos= 9999;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[nums.size() - 1])
                low = mid + 1;
            else if(nums[mid] <= nums[nums.size() - 1]){
                high = mid - 1;
                minpos = mid;    
            }
        }
        return nums[minpos];
    }
};

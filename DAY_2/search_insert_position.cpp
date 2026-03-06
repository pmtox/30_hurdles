/*
SO WE CAN DO IT LIKE THIS
    if(mid < k){
        just set the low index at the mid +1 & update mid
    }
    else{
        we put the high at the mid -1;
    }
        (AND I GUESS WE WILL UPDATE THE TARGET AT THE FRONT OR BACK OF THE 
        INDEX WHICH GOT LOWER VALUE THAN THE TARGET VALUE? RIGHT?)

*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        int high = nums.size()-1 , low = 0;
        
        if(nums[high] == target) return high;
        if(nums[low] == target) return low;
        while(high >= low){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return low;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        int mid = (start+end)/2;
        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        return -1;
    }
};

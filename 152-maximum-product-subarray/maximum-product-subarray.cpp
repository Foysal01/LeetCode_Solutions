class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minTillNow = nums[0];
        int maxTillNow = nums[0];
        int maximum = nums[0];
        //int current;
        for(int i=1; i<nums.size(); i++){
            int current = nums[i];
            int tempMaxTillNow = max(current, max(minTillNow*current, maxTillNow*current));
            minTillNow = min(current, min(minTillNow*current, maxTillNow*current));
            maxTillNow = tempMaxTillNow;
            maximum = max(maximum, maxTillNow);
        }
        return maximum;
    }
};
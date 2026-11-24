class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        // sort(nums.begin(),nums.end());
        while (i < j) {
            int sum=nums[i] + nums[j];
            if (sum == target) {
                return {i,j};
            }
            else if(sum<target){
                i++;
            }
            else
            j--;
        }
        return {};
    }
};

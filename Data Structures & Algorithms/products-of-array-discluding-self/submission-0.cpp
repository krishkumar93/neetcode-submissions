class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixPro(n);
        vector<int>suffixPro(n);
        prefixPro[0]=1;
        for(int i=1;i<n;i++){
            prefixPro[i]=prefixPro[i-1]*nums[i-1];
        }   
        suffixPro[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffixPro[i]=suffixPro[i+1]*nums[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(prefixPro[i]*suffixPro[i]);
        }
        return ans;
    }
};

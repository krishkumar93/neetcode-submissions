class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        vector<int>s;
        for(auto i:mpp){
            s.push_back(i.second);
        }
        sort(s.rbegin(),s.rend());
        vector<int>ans;
        int i=0;
        while(i!=k){
            for(auto k:mpp){
                if(s[i]==k.second){
                    ans.push_back(k.first);
                    mpp.erase(k.first);
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};

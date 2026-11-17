class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int cnt=0;
        for(auto i:st){
            int m=1;
            if(st.find(i-1)!=st.end()){
                continue;
            }
            else{
                int k=i;
                while(st.find(k+1)!=st.end()){
                    m++;
                    k++;
                }
                cnt=max(cnt,m);
            }
        }
        return cnt;
    }
};

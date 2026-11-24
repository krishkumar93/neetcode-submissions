class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
                ss+=tolower(s[i]);
            }
        }
        int i=0;
        int j=ss.size()-1;
        while(i<=j){
            if(ss[i]!=ss[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

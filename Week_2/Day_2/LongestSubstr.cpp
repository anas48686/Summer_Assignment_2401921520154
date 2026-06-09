class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0,l=0,r=0;
        vector<int> hash(256,-1);
        while(r<s.size()){
            if(hash[s[r]]!=-1 && hash[s[r]]>=l) l=hash[s[r]]+1;
            int len=r-l+1;
            maxLen=max(maxLen,len);
            hash[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};
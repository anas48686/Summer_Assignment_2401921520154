class Solution {
public:
    bool isPalindrome(const string& s,int left,int right){
        int n=s.size();
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxLen=0;
        int n=s.size();
        int stIdx=-1;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if((r-l+1)>maxLen){
                    maxLen=r-l+1;
                    stIdx=l;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if((r-l+1)>maxLen){
                    maxLen=r-l+1;
                    stIdx=l;
                }
                l--;
                r++;
            }
        }
        return s.substr(stIdx,maxLen);
    }
};
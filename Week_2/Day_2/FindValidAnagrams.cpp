class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.size();
        int n=p.size();
        if(n>m) return {};
        vector<int> freqSubstr(26,0),freq(26,0);
        vector<int> ans;
        for(char c:p) freq[c-'a']++;
        int l=0,r=n-1;
        for(int i=0;i<=r;i++) freqSubstr[s[i]-'a']++;
        while(r<m){
            if(freq==freqSubstr){
                ans.push_back(l);
            }
            freqSubstr[s[l]-'a']--;
            l++;
            r++;
            if(r<m) freqSubstr[s[r]-'a']++;        
        }
        return ans;
    }
};
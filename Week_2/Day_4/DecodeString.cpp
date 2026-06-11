class Solution {
public:
    string solve(string& s, int& i){
        string curr="";
        while(i<s.size()){
            if(isdigit(s[i])){
                int k=0;
                while(isdigit(s[i])){
                    k=k*10+(s[i]-'0');
                    i++;
                }
                i++; // skip '['
                string inner=solve(s,i);
                i++; // skip ']'
                while(k--) curr+=inner;
            }
            else if(s[i]==']') return curr;
            else {
                curr+=s[i];
                i++;
            }
        }
        return curr;
    }
    string decodeString(string s) {
        int i=0;
        return solve(s,i);
    }
};
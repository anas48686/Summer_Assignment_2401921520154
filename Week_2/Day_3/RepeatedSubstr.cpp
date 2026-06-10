class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=n/2;l++){
            string unit=s.substr(0,l);
            string t="";
            if(n%l==0){
                for(int i=0;i<n/l;i++){
                    t+=unit;
                }
                if(t==s) return true;
            }
        }
        return false;
    }
};
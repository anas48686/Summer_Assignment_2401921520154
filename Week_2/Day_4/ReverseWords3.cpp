class Solution {
public:
    void reverseWord(string& s,int l,int r){
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
    string reverseWords(string s) {
        int l=0,r=0,n=s.size();
        while(r<n){
            if(s[r]==' '){
                reverseWord(s,l,r-1);
                l=r+1;
            }
            r++;
        }
        reverseWord(s,l,n-1);
        return s;
    }
};
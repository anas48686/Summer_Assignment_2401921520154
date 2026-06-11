class Solution {
public:
    void generateAll(int n, string curr, vector<string>& ans,int open, int close){
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        if(open<n) generateAll(n,curr+'(',ans,open+1,close);
        if(close<open) generateAll(n,curr+')',ans,open,close+1);
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string> ans;
        generateAll(n,curr,ans,0,0);
        return ans;
    }
};
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        while(char c: s){
            if(c=='(' || c=='{' || c=='[') st.push(c);
            else{
                if(st.empty()) return false;
                char last=st.top();
                st.pop();
                if(ch=='(' && last=')' || ch=='{' && last=='}' || ch=='[' && last==']') continue;
                else return false;
            }
        }
        return st.empty();
    }
};
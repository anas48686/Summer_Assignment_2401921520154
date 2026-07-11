class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        if(n==1) return heights[0];
        int maxArea=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int elIdx=st.top();
                st.pop();
                int pse=st.empty()? -1: st.top();
                int nse=i;
                int area=heights[elIdx]*(nse-pse-1);
                maxArea=max(maxArea,area);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse=n;
            int elIdx=st.top();
            st.pop();
            int pse=st.empty()? -1: st.top();
            int area=heights[elIdx]*(nse-pse-1);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int l=0,r=n-1,i=n-1;
        while(i>=0 && l<=r ){
            int n1=nums[l]*nums[l];
            int n2=nums[r]*nums[r];
            if(n1>n2){
                ans[i]=n1;
                l++;
            }
            else{
                ans[i]=n2;
                r--;
            }
            i--;
        }
        return ans;
    }
};
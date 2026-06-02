class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int l=0,r=k;
        for(int i=l;i<r;i++){
            sum+=nums[i];
        }
        double maxSum=sum;
        while(r<nums.size()){
            sum+=nums[r];
            sum-=nums[l];
            maxSum=max(maxSum,sum);
            l++;
            r++;
        }
        return maxSum/(double)k;
    }
};
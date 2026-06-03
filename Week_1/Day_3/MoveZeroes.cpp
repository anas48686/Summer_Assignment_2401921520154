class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0) break;
        }
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};
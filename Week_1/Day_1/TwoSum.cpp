class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int second=target-first;
            if(map.find(second)!=map.end()){ //found & find->O(1)
                return {map[second],i};
            }
            map[first]=i;
        }
        return {-1,-1};
    }
};
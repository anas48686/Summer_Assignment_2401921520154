class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        return m%2==0?sum: sum-mat[m/2][n/2];
    }
};
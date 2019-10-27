#include <iostream>
#include <vector>

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size()==0) return nums;
        int m = nums.size();
        int n = nums[0].size();
        if(m*n != r*c) return nums;
        
        vector<vector<int>> res(r,vector<int>(c));
        int oldY, oldX, newX, newY;
        for(int i= 0; i< m*n; i++){
            oldY = i/n;
            oldX = i%n;
            newY = i/c;
            newX = i%c;
            res[newY][newX] = nums[oldY][oldX];
        }
        return res;
    }
};
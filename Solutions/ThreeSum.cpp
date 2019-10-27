#include <vector>
#include <iostream>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        for(int i = 0; i< nums.size();i++){
            int target = 0 - i;
            unordered_map<int,int> map;
            for(int j = i; j < nums.size(); j++ ){
                int search= target-nums[i];
                if(map.count(search) && nums[search]!=j)
                    res.push_back(new vector<int>{i,j,nums[search]});
                map[nums[j]]=j;
            }
        }
    }
};
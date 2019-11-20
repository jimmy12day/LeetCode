//Leetcode 78 - Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret;
        map<vector<int>,int> _map;
        helper(_map,nums);
        for(map<vector<int>,int>::iterator it = _map.begin(); it != _map.end(); ++it) {
            ret.push_back(it->first);
        }
        return ret;
    }
    
    void helper(map<vector<int>,int> &_map, vector<int> nums){
        if(nums.size()==0)
            _map.insert(std::pair<vector<int>,int>(vector<int>(),0));
        if(nums.size()>0){    
            _map.insert(std::pair<vector<int>,int>(nums,nums.size()));
            for(int i=0; i < nums.size();i++)
            {
                vector<int> removedNums = nums;
                removedNums.erase(removedNums.begin()+i);
                helper(_map,removedNums);
            }
        }
    }
};
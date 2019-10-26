//8 ms 10.1MB memory beats 92.80% of C++ online submissions
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> map;//key value pair, allow read/write in O(1) 
    
        for(int i=0; i<nums.size();++i){
            int remains = target - nums[i];
            if(map.count(remains)&&map[remains]!=i)
                return {map[remains],i};
            map[nums[i]]=i;
        }
        return {};
    }
};
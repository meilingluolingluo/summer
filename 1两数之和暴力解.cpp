#include <vector>
#include <unordered_map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if (target==nums[i]+nums[j]){
            return{i,j};}
        }
    }
    return {};
    }
};

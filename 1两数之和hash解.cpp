#include <vector>
#include <unordered_map>
#include <iostream>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> hashtable;
        for(int i=0;i<nums.size();i++){
            auto it = hashtable.find(target-nums[i]);
            if(it != hashtable.end()){
                return {it->second,i};
            }
            hashtable[nums[i]]=i;
        }
        return {};
    }
};
int main(){
    Solution solution;
    std::vector<int> nums{2,7,11,15};
    int target = 13;
    std::vector<int> twosum = solution.twoSum(nums,target); 
    for(int i=0;i<twosum.size();i++){
        std::cout<<twosum[i];
    }
    return 0;
    
}
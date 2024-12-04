class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num;
        for ( int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]+nums[i]==target){
                    num.push_back(i);
                    num.push_back(j);
                    return num;
                }
            }
        }
        return num;
        
    }
};
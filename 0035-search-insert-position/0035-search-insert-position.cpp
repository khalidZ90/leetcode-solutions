class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int key=0;
       for(int i=0;i<nums.size();i++) {
           if(nums[i]<target){
             key++;
           }
           else return key;
       }
       return key;
    }
};
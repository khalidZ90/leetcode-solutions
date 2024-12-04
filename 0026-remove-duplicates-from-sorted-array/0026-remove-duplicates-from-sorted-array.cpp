class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        vector<int>expectednums;
        expectednums.push_back(nums[0]);
    
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=expectednums[k]){
                
                expectednums.push_back(nums[i]);
                k++;
            }
            
            }
            k++;
        
        for(int i=0;i<k;i++){
            nums[i]=expectednums[i];
        }
        return k;
    }
};
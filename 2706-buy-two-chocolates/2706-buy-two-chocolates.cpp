class Solution {
public:
void sort(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        int min =i;
        for (int j=i+1;j<nums.size();j++){
            if(nums[min]>nums[j])
            min=j;
        }
        if(min!=i){
            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
        }
    }
}
    int buyChoco(vector<int>& prices, int money) {
        sort(prices);
        int sum =prices[0] + prices[1];
        int leftover = money - sum;
        if ( leftover<0) return money;
        else return leftover;
    }
};
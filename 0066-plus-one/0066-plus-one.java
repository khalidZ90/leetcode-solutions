class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length-1;
        if(digits[n]<9){
            digits[n]=digits[n]+1;
             return digits;
        }
      
        else{
            int i=n;
            while(i>=0){
                if(digits[i]==9){
                    digits[i]=0;
                    i--;
                    if(i==-1) break;
                }
                else{
                    digits[i]=digits[i]+1;
                     return digits;
                }
                }
            
        }
        int[] nums=new int[n+2];
        nums[0]=1;
        for(int i=0;i<=n;i++){
            nums[i+1]=digits[i];
        }
          return nums;
    }
}
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        double reversed =0;
        int num =x;

        while(num!=0){
            int r =num%10;
            reversed=reversed*10+r;
            num/=10;
        }


        if(reversed==x)
        return true;
        else 
        return false;
        
    }
};
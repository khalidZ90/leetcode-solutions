class Solution {
public:
    int numberOfMatches(int n) {
        int played;
        if(n==1) return 0;
        if(n%2==0){
          played=n/2;
          n=n/2;
        }
        else{
            played= (n-1)/2;
            n=played+1;
        }
        return played+numberOfMatches(n);
    }
};
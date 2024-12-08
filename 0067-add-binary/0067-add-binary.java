class Solution {
    public String addBinary(String a, String b) {
       String result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry != 0) {
            int digitA = (i >= 0) ? a.charAt(i) - '0' : 0;
            int digitB = (j >= 0) ? b.charAt(j) - '0' : 0;

            int sum = digitA + digitB + carry;
            result = (sum % 2) + result; 
            carry = sum / 2; //

            i--;
            j--;
        }

        return result;
        
    }
}
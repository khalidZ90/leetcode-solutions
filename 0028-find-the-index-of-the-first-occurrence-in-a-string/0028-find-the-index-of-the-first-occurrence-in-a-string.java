class Solution {
    public int strStr(String haystack, String needle) {
       int needleLength =needle.length();
        int haystackLength =haystack.length();
        if(needleLength>haystackLength) return -1;
        int differenceLength =haystackLength-needleLength;
        for(int i=0;i<=differenceLength;i++){
          String temp = haystack.substring(i,i+needleLength);
          if(needle.equals(temp)) return i;
        }
        return -1;
    }
}
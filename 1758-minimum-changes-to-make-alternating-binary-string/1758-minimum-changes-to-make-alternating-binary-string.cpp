class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
    int operations_to_make_zero = 0;
    int operations_to_make_one = 0;

    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            operations_to_make_zero += (s[i] != '0');
        } else {
            operations_to_make_zero += (s[i] != '1');
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            operations_to_make_one += (s[i] != '1');
        } else {
            operations_to_make_one += (s[i] != '0');
        }
    }

    
    return min(operations_to_make_zero, operations_to_make_one);

        
    }
};
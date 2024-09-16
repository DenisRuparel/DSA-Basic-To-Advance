#include <stdlib.h>
#include <climits>
class Solution {
public:
    int reverse(int n) {
        bool isNegative = n < 0;
        n = abs(n);
        int rev = 0;
        
        while (n > 0) {
            int ld = n % 10;
            if (rev > (INT_MAX - ld) / 10)
                return 0; 
            rev = (rev * 10) + ld;
            n /= 10;
        }
        
        return isNegative ? -rev : rev;
    }
};

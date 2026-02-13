class Solution {
public:
    long long cal(int x) {
        long long y = 0;
        while (x > 0) {
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return y;
    }
    int reverse(int x) {
        if (x < 0 && x != INT_MIN) {
            long long y = (cal(x * (-1))) * (-1);
            return y > INT_MIN ? y : 0;
        }
        if (x > 0) {
            long long y = cal(x);
            return y < INT_MAX ? y : 0;
        }
        return 0;
    }
};

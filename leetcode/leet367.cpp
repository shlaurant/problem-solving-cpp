//
// Created by laurant on 3/6/19.
//

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        long low = 0;
        long high = num;
        while (low != high) {
            if (valueFor(mid(low, high)) * valueFor(mid(low, high)) ==
                4 * (long) num) {
                return true;
            } else if (valueFor(mid(low, high)) * valueFor(mid(low, high)) >
                       4 * (long) num) {
                high = (low + high) / 2;
            } else {
                low = (low + high) / 2 + 1;
            }
        }
        return false;
    }

    long valueFor(long index) {
        return index + 1;
    }

    long mid(long low, long high) const { return (low + high) / 2; }
};
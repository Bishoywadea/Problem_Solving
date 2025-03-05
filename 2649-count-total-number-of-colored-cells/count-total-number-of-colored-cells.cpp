class Solution {
public:
    long long coloredCells(int n) {
        long long nn = n;
        return 1 + nn*(nn-1)/2 * 4;
    }
};
class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> result(2 * n - 1, 0);
        vector<bool> used(n + 1, false);
        backtrack(result, used, n, 0);
        return result;
    }

private:
    bool backtrack(vector<int>& result, vector<bool>& used, int n, int index) {
        if (index == result.size()) return true;
        if (result[index] != 0) return backtrack(result, used, n, index + 1);

        for (int i = n; i >= 1; --i) {
            if (used[i]) continue;
            int j = (i > 1) ? index + i : index;
            if (j >= result.size() || result[j] != 0) continue;

            result[index] = result[j] = i;
            used[i] = true;
            if (backtrack(result, used, n, index + 1)) return true;
            result[index] = result[j] = 0;
            used[i] = false;
        }
        return false;
    }
};
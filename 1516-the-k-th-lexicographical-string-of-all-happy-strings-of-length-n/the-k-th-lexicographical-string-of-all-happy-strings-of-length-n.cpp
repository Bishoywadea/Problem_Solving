class Solution {
public:
    string rec(int n, int &k, const string &cur) {
        if (cur.size() == n) {
            k--;
            return (k == 0) ? cur : "";
        }
        for (char c : {'a', 'b', 'c'}) {
            if (cur.empty() || cur.back() != c) {
                string ans = rec(n, k, cur + c);
                if (!ans.empty()) return ans;
            }
        }
        return "";
    }

    string getHappyString(int n, int k) {
        return rec(n, k, "");
    }
};

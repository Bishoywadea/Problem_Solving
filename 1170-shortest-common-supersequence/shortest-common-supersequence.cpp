class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        string lcs = getLCS(s1, s2);
        int i = 0, j = 0;
        string result = "";
        for (char c : lcs) {
            while (s1[i] != c) {
                result += s1[i];
                i++;
            }
            while (s2[j] != c) {
                result += s2[j];
                j++;
            }
            result += c;
            i++;
            j++;
        }
        result += s1.substr(i) + s2.substr(j);
        return result;
    }

    string getLCS(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        string lcs = "";
        int i = m, j = n;
        while (i > 0 && j > 0) {
            if (s1[i-1] == s2[j-1]) {
                lcs = s1[i-1] + lcs;
                i--;
                j--;
            } else if (dp[i-1][j] > dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
        return lcs;
    }
};
class Solution {
public:
    bool canPartition(string& s, int startIdx, int target)
    {
        if (startIdx == s.size() && target == 0) return true;
        if (target < 0) return false;
        bool ans = false;
        int leftNum = 0;
        for (int i = startIdx; i < s.size(); i++)
        {
            leftNum = (leftNum * 10) + (s[i] - '0');
            
            bool isPossible = canPartition(s, i + 1, target - leftNum);
            if (isPossible) { ans = true; break; }
        }
        return ans;
    }
    int punishmentNumber(int n)
    {
        int sum = 0;
        for (int num  = 1; num <= n; num++)
        {
            int sqr = num * num;
            string sqrStr = to_string(sqr);
            if (canPartition(sqrStr, 0, num)) 
            {
                sum += sqr;
            }
        }
        return sum;
    }
};
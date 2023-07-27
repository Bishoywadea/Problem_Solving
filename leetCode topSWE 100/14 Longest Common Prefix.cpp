class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	string ans = strs[0];
	int index = 0;
	for (int i = 1; i < strs.size(); i++){
		index = 0;
		while (ans[index] == strs[i][index] && index < min(ans.size(), strs[i].size()))
			index++;
		ans = ans.substr(0, index);
	}
	return ans;
}
};
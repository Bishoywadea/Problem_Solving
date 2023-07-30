class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int buy = prices[0];
		int sell = prices[0];
		int ans = 0;
		for (int i = 1; i < prices.size(); i++) {
			if (prices[i] < buy) {
				if (sell - buy > ans) ans = sell - buy;
				buy = prices[i];
				sell = buy;
			}
			else if (prices[i] > sell)
				sell = prices[i];
		}
		return max(ans, sell - buy);
	}
};
#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	set<int> st;
	for (int i = 2; i <= 3; ++i) {
		int x, y; cin >> x;
		while (x--) {
			cin >> y;
			st.insert(y);
		}
	}

	if (st.size() == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";

	return 0;
}
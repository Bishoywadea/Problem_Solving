class Solution {
public:
bool isPowerOfThree(int n) {
	if (n == 0)
		return 0;
	double x = (log(n) / log(3));
	double z = ceil((log(n) / log(3)));
	if (abs(x-z) <= 0.0000000001)
		return 1;
	else
		return 0;
}
};
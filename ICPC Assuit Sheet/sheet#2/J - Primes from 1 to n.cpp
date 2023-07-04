#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int k = 2; k <= n; k++)
	{
        bool is_prime = true;

        for (int i = 2; i <= k / 2; ++i) {
            if (k % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << k<<" ";
        else{}
	}

}
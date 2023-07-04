#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

char theRuler(int arr[], char cstart, char cend) {

	char minimum = min(int(cstart), int(cend));
	int sumprev = 99999999;
	for (int i = 0; i < 26; i++)
	{
		int sum = (abs(arr[i] - arr[(int(cstart) - 97)]) + abs(arr[i] - arr[(int(cend) - 97)]));
		if (sum<sumprev )
		{
			minimum = char(i + 97);
			sumprev = sum;
		}
		else if(sum==sumprev &&(i + 97) < minimum){
			minimum = char(i + 97);
			sumprev = sum;
		}
	}
	return minimum;

}

char theFRuler(int arr[], char cend) {
	char minimum = cend;
	for (int i = 0; i < 26; i++)
	{
		if (((i + 97) < minimum) && (arr[i] == arr[(int(cend) - 97)]))
		{
			minimum = char(i + 97);
		}
	}
	return minimum;
}

char theLRuler(int arr[], char cstart) {
	char minimum = cstart;
	for (int i = 0; i < 26; i++)
	{
		if ((i + 97 < minimum) && (arr[i] == arr[(int(cstart) - 97)]))
		{
			minimum = char(i + 97);
		}

	}
	return minimum;
}

int main()
{
	int arr[26];
	string s;
	cin >> s;
	int start, end;
	char temp;
	bool flag;
	for (int i = 0; i < 26; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '?') { flag = true; }
		else
		{
			flag = false; break;
		}
	}
	if (flag) {
		temp = 'a';
		cout << 0 << endl;
		for (int i = 0; i < s.size(); i++)
		{
			cout << temp;
		}
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '?')
			{
				start = i;
				end = i;
				for (int j = i + 1; j < s.size(); j++)
				{
					if (s[j] == '?') { end = j; }
					else { break; }

				}
				if (i == 0)
				{
					temp = theFRuler(arr, s[end + 1]);
					for (int k = 0; k <= (end - start); k++)
					{
						s[start + k] = temp;
					}
				}
				else if (end == s.size() - 1)
				{
					temp = theFRuler(arr, s[start - 1]);
					for (int k = 0; k <= (end - start); k++)
					{
						s[start + k] = temp;
					}
				}
				else {
					temp = theRuler(arr, s[start - 1], s[end + 1]);
					for (int k = 0; k <= (end - start); k++)
					{
						s[start + k] = temp;
					}
				}

			}
		}
		int sum = 0;
		for (int i = 0; i < s.size() - 1; i++)
		{
			int x = abs(arr[int(s[i + 1]) - 97] - arr[int(s[i]) - 97]);
			sum = sum + x;
		}
		cout << sum << endl;
		cout << s;
	}


}
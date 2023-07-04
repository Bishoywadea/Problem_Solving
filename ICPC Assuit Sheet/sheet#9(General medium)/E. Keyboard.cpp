#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<char, pair<char,char>> keys;
	keys.insert({ 'q', make_pair('/','w') });
	keys.insert({ 'w', make_pair('q','e') });
	keys.insert({ 'e', make_pair('w','r') });
	keys.insert({ 'r', make_pair('e','t') });
	keys.insert({ 't', make_pair('r','y') });
	keys.insert({ 'y', make_pair('t','u') });
	keys.insert({ 'u', make_pair('y','i') });
	keys.insert({ 'i', make_pair('u','o') });
	keys.insert({ 'o', make_pair('i','p') });
	keys.insert({ 'p', make_pair('o','a') });
	keys.insert({ 'a', make_pair('p','s') });
	keys.insert({ 's', make_pair('a','d') });
	keys.insert({ 'd', make_pair('s','f') });
	keys.insert({ 'f', make_pair('d','g') });
	keys.insert({ 'g', make_pair('f','h') });
	keys.insert({ 'h', make_pair('g','j') });
	keys.insert({ 'j', make_pair('h','k') });
	keys.insert({ 'k', make_pair('j','l') });
	keys.insert({ 'l', make_pair('k',';') });
	keys.insert({ ';', make_pair('l','z') });
	keys.insert({ 'z', make_pair(';','x') });
	keys.insert({ 'x', make_pair('z','c') });
	keys.insert({ 'c', make_pair('x','v') });
	keys.insert({ 'v', make_pair('c','b') });
	keys.insert({ 'b', make_pair('v','n') });
	keys.insert({ 'n', make_pair('b','m') });
	keys.insert({ 'm', make_pair('n',',') });
	keys.insert({ ',', make_pair('m','.') });
	keys.insert({ '.', make_pair(',','/') });
	keys.insert({ '/', make_pair('.','q') });
	char c;
	cin >> c;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (c == 'R')
		{
			
			cout << keys[s[i]].first;
		}
		else
		{
			cout << keys[s[i]].second;
		}
	}
}
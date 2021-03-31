#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		// view the image in this repository for better understanding
		// count the number of occurrences of 1 in the string
		long long ones = count(s.begin(), s.end(), '1');
		// apply the sum formula to get the total number of substrings
		cout << (ones * (ones + 1)) / 2 << '\n';
	}
}

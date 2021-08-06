#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		cin.ignore();
		vector<vector<string>> a(n);
		for (int i = 0; i < n; i++) {
			string s;
			getline(cin, s);
			string temp = "";
			// separate the string inputs into a two-dimensional string array
			for (int j = 0; j < (int) s.size(); j++) {
				if (s[j] == ' ') {
					a[i].emplace_back(temp);
					temp = "";
				} else {
					temp += string(1, s[j]);
				}
			}
			a[i].emplace_back(temp);
		}
		// reverse the order of two-dimensional string array
		reverse(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < (int) a[i].size(); j++) {
				if (i == 0 && j == 0) {
					// if index 'i' and 'j' (first line, first word) is equal to 0, then output "Begin"
					cout << "Begin" << " ";
					// continue the loop
					continue;
				} else if (i > 0 && j == 0) {
					// if index 'i' is greater than 0 and index 'j' is equal to 0 (first word)
					// then check if the previous first word ('j' = 0) is equal to "Left" or "Right"
					if (a[i - 1][0] == "Left") {
						// if the previous first word is equal to "Left", then output "Right"
						cout << "Right" << " ";
					} else {
						// otherwise, output "Left"
						cout << "Left" << " ";
					}
					// continue the loop
					continue;
				}
				// print the remaining words
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}

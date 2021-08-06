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
		vector<string> a(n), remaining(n);
		for (int i = 0; i < n; i++) {
			// store the first word in vector 'a'
			cin >> a[i];
			// store the remaining words in vector 'remaining'
			getline(cin, remaining[i]);
		}
		// output "Begin" and the 'remaining[n - 1]' (last line)
		cout << "Begin" << remaining[n - 1] << '\n';
		// start the loop in reverse order and skipping the last element
		for (int i = n - 2; i >= 0; i--) {
			if (a[i + 1] == "Left") {
				// if the previous first word is "Left", then print "Right" and the remaining words
				cout << "Right" << remaining[i];
			} else {
				// if the previous first word is "Right", then print "Left" and the remaining words
				cout << "Left" << remaining[i];
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}

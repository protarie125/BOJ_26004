#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	auto h = int{ 0 };
	auto i = int{ 0 };
	auto a = int{ 0 };
	auto r = int{ 0 };
	auto c = int{ 0 };
	for (auto j = 0; j < n; ++j) {
		if ('H' == s[j]) {
			++h;
		}
		else if ('I' == s[j]) {
			++i;
		}
		else if ('A' == s[j]) {
			++a;
		}
		else if ('R' == s[j]) {
			++r;
		}
		else if ('C' == s[j]) {
			++c;
		}
	}

	cout << min({ h, i, a, r, c });

	return 0;
}
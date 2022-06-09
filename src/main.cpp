#include <iostream>
#include <set>

using namespace std;

using si = set<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = si{};

	int n;
	cin >> n;
	while (0 < (n--)) {
		int x;
		cin >> x;

		s.insert(x);
	}

	int m;
	cin >> m;
	while (0 < (m--)) {
		int x;
		cin >> x;

		if (s.end() != s.find(x)) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}

	return 0;
}
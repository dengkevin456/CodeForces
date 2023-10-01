#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, a = 0;
	cin >> n;
	while (n--) {
		int c = 0;
		for (int i = 0; i < 3; i++) {
			int b;
			cin >> b;
			if (b == 1) c++;
		}
		if (c >= 2) a++;
	}
	cout << a << endl;
	return 0;
}

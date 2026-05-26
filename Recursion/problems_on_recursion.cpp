#include <iostream>
using namespace std;

//1st type: Using a counter, print 1 to N (No Backtracking)
void f1(int n, int counter) {
	if (counter > n) {
		return;
	}

	cout << counter << endl;
	f1(n, counter + 1);

	return;
}

//2nd type: Using a counter, print N to 1 (No Backtracking)
void f2(int n, int limit) {
	if (limit > n) {
		return;
	}

	cout << n << endl;
	f2(n - 1, limit);

	return;
}

// 3rd type: Using Backtracking, print 1 to N
// this is MY WAY.
void f3a(int n) {
	if (n == 1) {
		cout << n << endl;
	} else {
		f3a(n - 1);
		cout << n << endl;
	}

	return;
}


// HIS WAY
void f3b(int i, int n) {
	if (i < 1) {
        return;
	} 
	f3b(i - 1, n);
	cout << i << endl;
}
// Differences between my and his ways: He uses two variable, while I use just one.

int main() {
	f1(4, 1);
	f2(4, 1);
	f3a(4);
	f3b(4, 4);
	return 0;
}
#include <iostream>
using namespace std;

// Parametrized recursion: Find sum of the first n natural numbers
void f1(int i, int sum) {
    if (i < 1) {
        cout << sum;
        return;
    }
    f1(i - 1, sum + i);
}

//Functional recursion: Find factorial of n
int f2(int n) {
    if (n == 0) {
        return 1;
    }
    return n * f2(n - 1);
}

int main() {
    f1(4, 0);
    cout << f2(4);
}
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Prints the Nth number in the fibonacci sequence
 * 
 * @details
 * Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
 * 
 * @param n N
 * @return int Nth fibonacci number
 */
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int f = fibonacci(n - 1) + fibonacci(n - 2);
    return fibonacci;
}

int main() {
    cout << fibonacci(4);
}
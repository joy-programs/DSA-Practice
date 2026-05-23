#include <iostream>
using namespace std;

//First type: Using a counter (No Backtracking)

void f(int n, int counter) {
    if (counter > n) {
        return;
    }
    
    cout << counter << endl;
    f(n, counter + 1);
    
    return;
}

int main() {
    f(4, 1);
    return 0;
}
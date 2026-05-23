#include <iostream>
using namespace std;

//First type: Using a counter, print 1 to N (No Backtracking)

void f1(int n, int counter) {
    if (counter > n) {
        return;
    }
    
    cout << counter << endl;
    f1(n, counter + 1);
    
    return;
}

// Second type: Using global variables, print N to 1 (Backtracking)
void f2() {
    f2();
}

int main() {
    f1(4, 1);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    unordered_map<int, int> mpp;
    cout << "Enter the number of elements you want in the array: ";
    cin >> n;
    cout << "Enter the integers one by one: "
    for (int i = 0; i < n; i++) {
        cin >> p;
        mpp[p] += 1;
    }
    
    cout << "The number of elements that you want to check: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        cout << p << " appears " << mpp[p] << " times." << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of your array: ";
    cin >> length;
    int arr[length];
    cout << "Enter the elements one by one (<=10): ";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Initialize a frequency array (hash table) with zeros for numbers 0 to 9
    int hash[10] = {0};
    // Count occurrences: use the input numbers as indices and increment their counts
    for (int i = 0; i < length; i++) {
        hash[arr[i]]++;
    }
    
    int n, p;
    cout << "Enter the number of elements(keys) that you want to search: ";
    cin >> n;
    cout << "Enter the elements one by one (<=10): ";
    // Process each element and print their frequency
    for (int i = 0; i < n; i++) {
        cin >> p;
        cout << p << " comes " << hash[p] << " times." << endl;
    }
    return 0;
}
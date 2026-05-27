#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string (consisting of only lowercase alphabets) that you want to check: ";
    cin >> s;
    int size = s.size();

    // Just need 26 slots for 'a' through 'z'
    int hash[26] = {0};

    // Map characters to indices 0-25 by subtracting the ASCII value of 'a'
    // Example: 'a' - 'a' = 0, 'b' - 'a' = 1, etc.
    for (int i = 0; i < size; i++) {
        hash[s[i] - 'a']++;
    }

    int n;
    char p;
    cout << "Enter the number of characters you want to check: ";
    cin >> n;
    cout << "Enter the characters you want to check one by one: ";
    for (int i = 0; i < n; i++) {
        cin >> p;
        
        // Apply the same 'p - 'a' formula to fetch the correct index instantly
        cout << p << " comes " << hash[p - 'a'] << " times." << endl;
    }
    return 0;
}
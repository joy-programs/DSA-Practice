#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string that you want to check: ";
    cin >> s;
    int size = s.size();

    // Create a frequency map for all possible ASCII characters (0-255)
    // Initializing everything to 0 so we start with a clean slate
    int hash[256] = {0};

    // Loop through the string and log character counts
    // The character's ASCII value automatically acts as its unique array index
    for (int i = 0; i < size; i++) {
        hash[s[i]]++;
    }
    
    int n;
    char p;
    cout << "Enter the number of characters you want to check: ";
    cin >> n;
    cout << "Enter the characters you want to check one by one: ";
    for (int i = 0; i < n; i++) {
        cin >> p;
        cout << p << " comes " << hash[p] << " times." << endl;
    }
    return 0;
}
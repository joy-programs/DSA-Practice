#include <bits/stdc++.h>
using namespace std;

// Swapping using a "for" or a "while" loop
void f1(int arr[], int left, int len) {
    int right = len - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    return;
}

// MyWay: Swapping using two pointers (Recursion)
void f2(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    f2(arr, l + 1, r - 1);
    return;
}

//Swapping using single pointer (Recursion)
void f3(int arr[], int i, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    f3(arr, i + 1, n);
    return;
}

// Check if a String is a Palindrome
bool f4(string& s, int i, int n) {
    if (i >= n / 2) {
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        return false;
    }
    return f4(s, i + 1, n);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    for (int x : a) {
        cout << x << ' ';
    }
    cout << endl;

    int length = sizeof(a) / sizeof(a[0]);
    
    f1(a, 0, length);
    f2(a, 0, length - 1);
    f3(a, 0, length);
    string s = "malayalam";
    cout << (f4(s, 0, s.size()) ? "Yes" : "No") << endl;
    
    for (int x : a) {
        cout << x << ' ';
    }
}
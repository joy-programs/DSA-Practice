#include <bits/stdc++.h>
using namespace std;

//Initial Brute Force
bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

//Better Approach
bool isAnagram(string s, string t) {
    unordered_map<char, int> hash;
    if (s.size() == t.size()) {
        for (auto i : s) {
            hash[i] += 1;
        }
        for (auto j : t) {
            hash[j] -= 1;
        }
        for (auto k : hash) {
            if (k.second != 0) {
                return false;
            }
        }
        return true;
    }
    return false;
}

// Optimal approach
bool isAnagram(string s, string t) {
    unordered_map<char, int> hash;
    vector<string> v;
    
    if (s.size() == t.size()) {
        int size = s.size();
        for (int i = 0; i < size; i++) {
            hash[s[i]] += 1;
            hash[t[i]] -= 1;
        }
        for (auto k : hash) {
            if (k.second != 0) {
                return false;
            }
        }
        return true;
    }
    return false;
}
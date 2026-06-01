#include <bits/stdc++.h>
using namespace std;

// Uding unordered_map
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> hash;
    for (auto i : nums) {
        if (hash.count(i)) {
            return true;
        }
        hash[i] = true;
    }
    return false;
}

//Using unordered_map
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> hash;
    for (auto i : nums) {
        if (hash.count(i)) {
            return true;
        }
        hash[i] = true;
    }
    return false;
}
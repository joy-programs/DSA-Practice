#include <bits/stdc++.h>
using namespace std;

//My Initial brute force method
vector<int> bruteForce(vector<int>& nums, int target) {
    int size = nums.size();
    for (int i = 0; i != size; i++) {
        for (int j = i + 1; j != size; j++) {
            if (nums[i] + nums[j] == target) {
                vector<int> k = {i, j};
                return k;
            }
        }
    }
    return {};
}
    
vector<int> bestSolution(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        int element = nums[i];
        int complement = target - element;
        if (mp.count(complement)) {
            return {i, mp[complement]};
        }
        mp[element] = i;
    }
    return {};
}

int main () {
    vector<int> k = {1, 2, 3};
    vector<int> m = twoSum(k , 5);
    for (auto it:m) {
        cout << it;
    }
    return 0;
}
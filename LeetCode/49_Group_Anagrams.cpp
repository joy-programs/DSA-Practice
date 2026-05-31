#include <bits/stdc++.h>
using namespace std;

//Initial Brute Force
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int size = strs.size();
    map<map<char, int>, vector<int>> hash;
    

    for (int i = 0 ; i < size ; i++) {
        string s = strs[i];
        map<char, int> mpp;

        for (auto it : s) {
            mpp[it] += 1;
        }
        
        hash[mpp].push_back(i);
    }
    vector<vector<string>> final;
    for (auto it : hash) {
        vector<string> anagrams;
        for (auto it2 : it.second) {
            anagrams.push_back(strs[it2]);
        }
        final.push_back(anagrams);
    }
    return final;
}

//Brute force 2 (with maps)
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int size = strs.size();
    map<map<char, int>, int> hash;
    vector<vector<string>> final;
    int index = 1;
    
    for (int i = 0 ; i < size ; i++) {
        string s = strs[i];
        map<char, int> mpp;

        for (auto it : s) {
            mpp[it] += 1;
        }
        
        if (hash[mpp] == 0) {
            hash[mpp] = index;
            index++;
            vector<string> s = {strs[i]};
            final.push_back(s);
        } else {
            final[hash[mpp] - 1].push_back(strs[i]);
        }
    }

    return final;
}

// Sorting the strings
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int size = strs.size();

    map<string, int> hash;
    vector<vector<string>> final;
    int index = 1;
    
    for (int i = 0 ; i < size ; i++) {
        string s = strs[i];
        sort(s.begin(), s.end());
        
        if (hash[s] == 0) {
            hash[s] = index;
            index++;
            vector<string> str = {strs[i]};
            final.push_back(str);
        } else {
            final[hash[s] - 1].push_back(strs[i]);
        }
    }

    return final;
}
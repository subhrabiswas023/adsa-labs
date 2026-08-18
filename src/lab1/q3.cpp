#include <stdexcept>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iterator>

#include "lab1/q3.h"

using namespace std;

pair<size_t, size_t> two_sum_brute(const vector<int>& v, int t) {    
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == t) return {i, j};
        }
    }
    
    throw out_of_range("");
}

pair<size_t, size_t> two_sum_sorting(const vector<int> &v, int t) {
    vector<pair<int, size_t>> e_idx(v.size());
    for(size_t i = 0; i < v.size(); i++) e_idx[i] = {v[i], i};
    
    sort(e_idx.begin(), e_idx.end());
    
    size_t l = 0;
    size_t r = v.size() - 1;
    
    while (l < r) {
        int sum = e_idx[l].first + e_idx[r].first;
        if (sum == t) return {e_idx[l].second, e_idx[r].second};
        else if (sum > t) r--;
        else l++; 
    }
    
    throw out_of_range("");
}

pair<size_t, size_t> two_sum_hashing(const vector<int>& v, int t) {
    unordered_map<int, size_t> e_idx;
    
    for (size_t i = 0; i < v.size(); i++) {
        auto it = e_idx.find(t - v[i]);
        if (it != e_idx.end()) {
            return {it->second, i};
        }
        
        e_idx[v[i]] = i;
    }
    
    throw out_of_range("");
}
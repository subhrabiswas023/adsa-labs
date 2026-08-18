#include <vector>
#include <limits>

#include "lab1/q2.h"

using namespace std;

int max_element(const vector<int> &v) {
    int _max = numeric_limits<int>::min();
    
    for (auto const &num: v) {
        if (num > _max) _max = num;
    }
    
    return _max;
}

int min_element(const vector<int> &v) {
    int _min = numeric_limits<int>::max();
    
    for (auto const &num: v) {
        if (num < _min) _min = num;
    }
    
    return _min;
}

int get_second_largest(const vector<int>& v) {
    int largest = numeric_limits<int>::min();
    int second_largest = numeric_limits<int>::min();
    
    for (const int& num: v) {
        if (num > largest) {
            second_largest = largest;
            largest = num;
        }
        else if (num < largest && num > second_largest) {
            second_largest = num;
        }
    }
    
    return second_largest;
}

int max_profit(const vector<int>& v) {
    size_t i = 0;
    int prev_max_profit = 0;
    
    for (size_t j = 0; j < v.size(); j++) {
        int curr_profit = v[j] - v[i];
        
        if (curr_profit > prev_max_profit) prev_max_profit = curr_profit;
        else if (curr_profit < 0) i = j;
    }
    
    return prev_max_profit;
}
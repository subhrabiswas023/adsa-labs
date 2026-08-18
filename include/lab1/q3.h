#pragma once

#include <utility>
#include <vector>

std::pair<size_t, size_t> two_sum_brute(const std::vector<int>& v, int t);  
std::pair<size_t, size_t> two_sum_sorting(const std::vector<int> &v, int t);
std::pair<size_t, size_t> two_sum_hashing(const std::vector<int>& v, int t);

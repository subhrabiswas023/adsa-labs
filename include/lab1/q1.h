#pragma once

#include <stdexcept>

class int_overflow : public std::runtime_error
{
    public:
    int_overflow(): runtime_error("Integer overflow") {}
};

int num_digits(int n);
int sum_digits(int n);
int truncate_trailing_zeros(int n);
int reverse(int n);
bool is_palindrome(int n);

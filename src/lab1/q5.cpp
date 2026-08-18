#include <iostream>
using namespace std;

#include <lab1/q5.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

void print_increasing_numbers(int n)
{
    if (n <= 0)
        return;
    print_increasing_numbers(n - 1);
    cout << n << " ";
}

void print_decreasing_numbers(int n)
{
    if (n <= 0)
        return;
    cout << n << " ";
    print_decreasing_numbers(n - 1);
}

int sum_of_digits_recur(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits_recur(n / 10);
}
/*
Compute the n-th Fibonacci number by the naive recursion F(n) = F(n − 1) + F(n − 2) with
F(0) = 0 and F(1) = 1. Print F(n) on the first line. On the second line print the total number
of calls made to the recursive function, counting every call including the base cases. Test cases
use n ≤ 40.
*/
pair<int, int> fibonacci(int n)
{
    if (n <= 1)
        return {n, 1};

    auto [fn_1, c1] = fibonacci(n - 1);
    auto [fn_2, c2] = fibonacci(n - 2);

    return {fn_1 + fn_2, c1 + c2 + 1};
}
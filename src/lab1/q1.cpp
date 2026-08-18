#include <limits>

#include "args.h"
#include "lab1/q1.h"

using namespace std;

constexpr int int_max = numeric_limits<int>::max();
constexpr int int_min = numeric_limits<int>::min();

int num_digits(int n)
{
    int count = 0;

    do
    {
        n /= 10;
        count++;
    } while (n);

    return count;
}

int sum_digits(int n)
{
    int sum = 0;

    do
    {
        sum += n % 10;
        n /= 10;
    } while (n);

    return abs(sum);
}

int reverse(int n)
{
    int result = 0;
    div_t d = div(n, 10);
    result = d.rem;
    n = d.quot;

    while (n)
    {
        if ((result >= 0 && result > int_max / 10) || (result < 0 && result < int_min / 10))
            throw int_overflow();
        result *= 10;

        d = div(n, 10);
        int digit = d.rem;

        if ((result >= 0 && result > int_max - digit) || (result < 0 && result < int_min - digit))
            throw int_overflow();

        result += digit;

        n = d.quot;
    };

    return result;
}

bool is_palindrome(int n)
{
    try
    {
        return n == reverse(n);
    }
    catch (const int_overflow &)
    {
        return false;
    }
}
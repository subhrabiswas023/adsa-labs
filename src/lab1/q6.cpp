#include <iostream>
using namespace std;

#include <lab1/q6.h>

int gcd(unsigned int a, unsigned int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

/*
The arguments are integers x and n with x ≥ 1 and 0 ≤ n ≤ 1018. The value x
n
is far too large
to store in any built-in type even for modest n, so print its remainder on division by 109 + 7
instead. This large prime is the standard modulus used in programming contests for exactly this
reason. Compute the answer by repeated squaring in O(log n) multiplications, using long long
throughout and taking the remainder after every multiplication. Test cases use n large enough
that a naive loop of n multiplications times out.
*/

constexpr long long M = 1e9 + 7;

long long expo(int x, long long n)
{
    if (n == 0)
        return 1;

    x %= M;
    long long result = expo(x, n / 2);

    result = (result * result) % M;
    if (n % 2 == 1)
    {
        result = (result * x) % M;
    }

    return result;
}
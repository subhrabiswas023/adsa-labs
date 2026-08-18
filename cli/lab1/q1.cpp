#include <iostream>

#include "args.h"
#include "lab1/q1.h"

using namespace std;

int main(int argc, char *argv[])
{
    Args args(argc, argv);
    int n = args.next<int>();

    cout << num_digits(n) << endl;
    cout << sum_digits(n) << endl;
    try
    {
        cout << reverse(n) << endl;
    }
    catch (const int_overflow)
    {
        cout << "overflow" << endl;
    }
    cout << (is_palindrome(n) ? "yes" : "no");
}
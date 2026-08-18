#include <iostream>

#include <args.h>
#include "lab1/q5.h"

using namespace std;

int main(int argc, char *argv[])
{
    Args args(argc, argv);

    char part = args.next<char>();
    int n = args.next<int>();

    switch (part)
    {
    case 'a':
        cout << fact(n) << endl
             << sum_of_digits_recur(n) << endl;
        break;

    case 'b':
        print_increasing_numbers(n);
        print_decreasing_numbers(n);
        break;

    case 'c':
    {
        auto result = fibonacci(n);
        cout << result.first << endl
             << result.second << endl;
    }
    }
}
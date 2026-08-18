#include <iostream>

#include <args.h>
#include "lab1/q6.h"

using namespace std;

int main(int argc, char *argv[])
{
    Args args(argc, argv);

    char part = args.next<char>();

    switch (part)
    {
    case 'a':
    {
        unsigned a = args.next<unsigned>();
        unsigned b = args.next<unsigned>();
        cout << gcd(a, b) << endl;
        break;
    }

    case 'b':
    {
        int x = args.next<int>();
        long long n = args.next<long long>();
        cout << expo(x, n) << endl;
    }
    }
}
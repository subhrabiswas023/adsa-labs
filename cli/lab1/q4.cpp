#include <iostream>

#include <args.h>
#include "lab1/q4.h"

using namespace std;

int main(int argc, char *argv[])
{
    Args args(argc, argv);

    char part = args.next<char>();

    switch (part)
    {
    case 'a':
    {
        string s = args.next();
        cout << (is_palindrome(s) ? "yes" : "no") << endl;
        break;
    }

    case 'b':
    {
        string s1 = args.next();
        string s2 = args.next();
        cout << (is_anagram(s1, s2) ? "yes" : "no") << endl;
    }
    }
}
#include <iostream>
#include <string>
#include <array>
#include <numeric>
#include <functional>
#include <algorithm>

#include <lab1/q4.h>

using namespace std;

bool is_palindrome(const string &s)
{
    if (s.empty())
        return true;

    size_t l = 0;
    size_t r = s.length() - 1;

    while (l < r)
    {
        unsigned char l_ch = static_cast<unsigned char>(s[l]);
        unsigned char r_ch = static_cast<unsigned char>(s[r]);

        if (!isalnum(l_ch))
        {
            l++;
            continue;
        }
        if (!isalnum(r_ch))
        {
            r--;
            continue;
        }

        l_ch = tolower(l_ch);
        r_ch = tolower(r_ch);

        if (l_ch != r_ch)
            return false;

        l++;
        r--;
    }

    return true;
}

bool is_anagram(const string &s1, const string &s2)
{
    array<int, 26> count{};

    for (auto &ch : s1)
    {
        ++count[ch - 'a'];
    }

    for (auto &ch : s2)
    {
        --count[ch - 'a'];
    }

    return all_of(count.begin(), count.end(), [](int x)
                  { return x == 0; });
}
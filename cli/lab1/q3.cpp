#include <iostream>

#include <args.h>
#include "lab1/q3.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;
    Args args(argc, argv);

    int t = args.next<int>();

    while (args.has())
    {
        v.push_back(args.next<int>());
    }

    try
    {
        auto result = two_sum_brute(v, t);
        cout << result.first << " " << result.second << endl;
    }
    catch (const out_of_range)
    {
        cout << "none" << endl;
    }
    try
    {
        auto result = two_sum_sorting(v, t);
        cout << result.first << " " << result.second << endl;
    }
    catch (const out_of_range)
    {
        cout << "none" << endl;
    }
}
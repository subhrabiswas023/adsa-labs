#include <iostream>
#include <vector>

#include "args.h"
#include "lab1/q2.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;
    Args args(argc, argv);

    while (args.has())
    {
        v.push_back(args.next<int>());
    };

    cout << max_element(v) << endl
         << min_element << endl
         << get_second_largest(v) << endl
         << max_profit(v) << endl;
}
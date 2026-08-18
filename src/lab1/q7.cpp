#include <iostream>
using namespace std;

#include <lab1/q7.h>

int move_disks(int n, char from, char to, char via, bool show_move)
{
    if (n == 0)
        return 0;

    int c1 = move_disks(n - 1, from, via, to, show_move);

    if (show_move) cout << n << " " << from << " " << to << endl;

    int c2 = move_disks(n - 1, via, to, from, show_move);
    
    return c1 + c2 + 1;
}
#include <iostream>

#include <args.h>
#include "lab1/q7.h"

using namespace std;

int main(int argc, char *argv[]) {
    Args args(argc, argv);
    
    int n = args.next<int>();
    
    if (n <= 5) {
        cout << move_disks(n, 'A', 'C', 'B', true) << endl;
    } else {
        cout << move_disks(n, 'A', 'C', 'B') << endl;
    }
}

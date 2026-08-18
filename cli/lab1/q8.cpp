#include <iostream>

#include <args.h>
#include "lab1/q8.h"

using namespace std;

int main(int argc, char *argv[])
{
    LinkedList list;
    
    list.push_front(3);
    list.print();
    cout << endl;
    
    list.push_front(2);
    list.print();
    cout << endl;
    
    list.push_back(5);
    list.print();
    cout << endl;
    
    list.insert_at(1, 4);
    list.print();
    cout << endl;
    
    list.delete_value(3);
    list.print();
    cout << endl;
    
    cout << list.search(5) << endl << list.length() << endl;
}
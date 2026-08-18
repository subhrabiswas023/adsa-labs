#include <iostream>
#include <string>

#include "lab1/q8.h"

using namespace std;

Node::Node(int v) : data(v), next(nullptr) {}
Node::Node(int v, Node *next) : data(v), next(next) {}

Node* LinkedList::get_node_at(int p)
{
    auto curr = head;
    for (int i = 1; i < p; i++)
    {
        if (!curr || !curr->next)
            throw out_of_range("Given position" + to_string(p) + "is beyond the range of the list");
        curr = curr->next;
    }
    return curr;
}

LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList() { clear(); }

void LinkedList::push_front(int v)
{
    auto node = new Node(v, head);
    head = node;
}

void LinkedList::push_back(int v)
{
    auto node = new Node(v);
    if (!head)
    {
        head = node;
        return;
    }
    Node *tail;
    for (tail = head; tail->next; tail = tail->next)
        ;
    tail->next = node;
}

void LinkedList::insert_at(int p, int v)
{
    if (p == 0)
    {
        push_front(v);
        return;
    }

    auto pred = get_node_at(p - 1);
    auto succ = pred->next;
    pred->next = new Node(v, succ);
}

void LinkedList::delete_value(int v)
{
    if (!head)
        return;

    if (head->data == v)
    {
        auto temp = head;
        head = head->next;
        delete temp;
        return;
    }

    auto target = head;
    Node *next = target->next;

    while (next && next->data != v) {
        target = next;
        next = next->next;
    }
        ;
    if (!next)
        return;

    target->next = next->next;
    delete next;
}

int LinkedList::search(int v) const
{
    auto curr = head;
    int i = 0;

    while (curr)
    {
        if (curr->data == v)
            return i;
        curr = curr->next;
        i++;
    }

    return -1;
}

int LinkedList::length() const
{

    int i = 0;
    for (auto curr = head; curr; curr = curr->next)
        i++;
    return i;
}

void LinkedList::print() const
{
    for (auto curr = head; curr; curr = curr->next)
    {
        cout << curr->data << " ";
    }
}

void LinkedList::clear()
{
    while (head)
    {
        auto temp = head;
        head = head->next;
        delete temp;
    }
}

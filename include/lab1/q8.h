#pragma once

struct Node
{
    int data;
    Node *next;

public:
    Node(int v);
    Node(int v, Node *next);
};

class LinkedList
{
    Node *head;
    Node *get_node_at(int p);

public:
    LinkedList();
    ~LinkedList();

    void push_front(int v);
    void push_back(int v);
    void insert_at(int p, int v);
    void delete_value(int v);
    int search(int v) const;
    int length() const;
    void print() const;
    void clear();
};
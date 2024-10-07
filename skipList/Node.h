#ifndef NODE_H
#define NDOE_H
#include "vector"
#include "iostream"
using std::vector, std::cerr;

class Node
{
public:
    int data;
    vector<Node *> next;

    Node(int value, int level)
    {
        data = value;
        // vector<T>dataName(size, value). Note that size comes before a set value
        next = vector<Node *>(level + 1, nullptr);
    }
};
#endif
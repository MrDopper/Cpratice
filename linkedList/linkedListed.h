#ifndef LINKEDLISTED_H
#define LINKEDLISTED_H
#include "Node.h"
#include "iostream"
using std::cout, std::endl, std::cerr;
class LinkedListed
{
public:
    LinkedListed();
    ~LinkedListed();
    void addLastValue(int value);
    void addFirstValue(int value);
    int deleteNode(int value);
    void displayList();
    void deleteByIndex(int index);

private:
    // pointer to the first node of a linkedlist
    Node *head;
};
#endif
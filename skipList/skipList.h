#ifndef SKIPLIST_H
#define SKIPLIST_H
#include "Node.h"

class SkipList
{
public:
    int currentMax;
    int maximumLevel;
    Node *head;
    SkipList();
    SkipList(int level);
};
#endif
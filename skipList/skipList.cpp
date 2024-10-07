#include "skipList.h"

SkipList::SkipList()
{
    currentMax = 0;
    maximumLevel = 0;
    head = nullptr;
}
SkipList::SkipList(int level)
{
    currentMax = 0;
    maximumLevel = level;
    head = new Node(INT_MIN, level);
}

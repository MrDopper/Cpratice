#include "Node.h"

Node::Node()
{
    next = nullptr;
}
/// @brief store the data into the node.
/// @param x

Node::Node(int x)
{
    data = x;
    next = nullptr;
}
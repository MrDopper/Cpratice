#ifndef NODE_H
#define NODE_H

struct Node
{
    Node *next;
    int data;
    // When I call the function without passing any paramater. It will point next
    // to nullptr. The reason I need to do this because it helps preventing garbage
    // memory.
    Node();
    Node(int x);
};
#endif
#ifndef NODE_H
#define NODE_H

struct Node{
    Node* next;
    int data;
    //When I call the function without passing any paramater. It will point next
    //to nullptr. The reason I need to do this because it helps preventing garbage
    //memory.
    Node(){
        next = nullptr;
    }
    /// @brief store the data into the node.
    /// @param x 
    Node(int x){
        data = x; 
        next = nullptr;
    }
};
#endif
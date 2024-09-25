#include "linkedListed.h"

LinkedListed::LinkedListed()
{
    head = nullptr;
}
LinkedListed::~LinkedListed()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current->next;
        // I deleted the first node that current pointing to
        // Now current and head is dangling pointer since they haven't point to anything for 1st trial
        delete current;
        // The function will reallocate and make current point to next node
        current = temp;
    }
    // Since only the head is still a dangling pointer. I pointed it to nullptr in order to prevent memory leak.
    head = nullptr;
    cout << "There is no memory lEAK" << endl;
}
void LinkedListed::addLastValue(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void LinkedListed::addFirstValue(int value)
{
    // I create a new Node that store value by calling Node function
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        // If there is no node, head will point to the current node
        head = newNode;
        // Stop the program and return the function
        return;
    }
    // Since next node of the current node always point to nullptr
    // I make it point to whatever from the head
    //.e.g head: 8 -> 7
    // newNode: 2 -> (next:nullptr)
    //  newNode -> (next = 8 -> 7)
    //  2 -> 8 -> 7
    newNode->next = head;
    // Re
    head = newNode;
}
int LinkedListed::deleteNode(int value)
{
    if (head == nullptr)
    {
        cout << "list is empty, returning -1.\n";
        return -1;
    }
    Node *current = head;
    Node *previous = nullptr;
    while (current != nullptr)
    {
        if (current->data == value)
        {

            if (previous == nullptr)
            {
                // deleting first node
                Node *temp = head;
                head = head->next;
                int x = temp->data;
                delete temp;
                return x;
            }
            else
            {
                // deleting any node that is not the head node
                previous->next = current->next;

                current->next = nullptr;

                int x = current->data;
                delete current;

                return x;
            }
        }
        previous = current;
        current = current->next;
    }
    cout << value << " does not exist, returning -1.\n";
    return -1;
}
void LinkedListed::displayList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
    delete temp;
}

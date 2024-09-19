#include "linkedListed.h"

int main()
{
    LinkedListed list;
    list.addLastValue(8);
    list.displayList();
    list.addLastValue(10);
    list.addLastValue(11);
    list.addFirstValue(2);
    list.addFirstValue(1);
    list.displayList();
    return 0;
}
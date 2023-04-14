#include <iostream>
#include "Node.h"
#include <vector>
using namespace std;

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(); // Default constructor
    LinkedList(int); // Constructor with known head
    void insert(int); // Inserts node after last node
    void remove(int); // Removes node at certain position
    void print(); // Prints all nodes in a linked list
    void vCreate(vector<int>); // Creates list from vector
    int Sum(); // Returns sum of all nodes
    ~LinkedList(); // Destructor
};

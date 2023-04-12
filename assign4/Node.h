struct Node{
    int info;
    Node *next;
    // Default constructor
    Node(){
        info=0;
        next=nullptr;
    }
    // Constructor where first node is known
    Node(int first){
        info=first;
        next=nullptr;
    }
};
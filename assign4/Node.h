struct Node{
    int info;
    int occurance;
    Node *next;
    // Default constructor
    Node(){
        info=0;
        occurance=0;
        next=nullptr;
    }
    // Constructor where first node is known
    Node(int first){
        info=first;
        occurance=1;
        next=NULL;
    }
};
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "LinkedList.h"

LinkedList::~LinkedList(){
    Node* temp = head;            
    while(temp!=NULL){
      Node* temp2=temp;          
      temp=temp->next;      
      delete temp2;                  
   }
}
LinkedList::LinkedList(){
    head=nullptr;
}
LinkedList::LinkedList(int first){
    insert(first);
}
void LinkedList::insert(int info){
    Node *New = new Node(info);
  
    if (head==nullptr) {
        head=New;
    }
    else {
        Node *temp=head;
        while(temp->next!=nullptr){
            if(temp->info==info){
                temp->occurance=(temp->occurance)+1;
                return;
            }
            temp=temp->next;
        }
        temp->next=New;
    }
}
void LinkedList::remove(int position){
    if(head==nullptr){
        cout<<"List is empty.\n";
        return;
    }
    int length=0;
    Node *temp=head, *temp2=nullptr;

    if(position==1){
        head=head->next;
        delete temp;
        return;
    }

    while (temp!= NULL) {
        temp=temp->next;
        length++;
    }
    if(length<position){
        cout<<"Index out of bounds.\n";
        return;
    }

    temp=head;
    for(int i=position;i>1;i--){
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=temp->next;
    delete temp;
}
void LinkedList::print(){
    if(head==nullptr){
        cout<<"List is empty.\n";
        return;
    }

    Node *temp=head;

    while(temp!=nullptr){
        cout<<"["<<temp->info<<","<<temp->occurance<<"]"<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void LinkedList::vCreate(vector<int> vList){
    for(int i=0;i<vList.size();i++){
        insert(vList.at(i));
    }
}
int LinkedList::Sum(){
    Node *temp=head;
    int sum=0;
    while(temp!=NULL){
        sum=sum+(temp->info*temp->occurance);
        temp=temp->next;
    }
    return sum;
}
#endif
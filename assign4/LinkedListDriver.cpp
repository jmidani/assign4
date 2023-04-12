/* 
* Jana Elmidany 900226145
* Assignment 4
* Uses vectors, nodes and linked lists
*/
#include <iostream>
#include "LinkedList.h"
#include <vector>
using namespace std;

int main(){
    LinkedList list;
    list.print();
    list.insert(1);
    list.insert(2);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.print();
    list.insert(2,3);
    list.print();
    int sum=list.Sum();
    cout<<"Sum is: "<<sum<<endl;

    for(int i=6;i>0;i--){
        list.remove(i);
        list.print();
    }
    vector<int>j;
    for(int i=2;i<7;i++){
        j.push_back(i);
    }
    list.vCreate(j);
    list.print();
    sum=list.Sum();
    cout<<"Sum is: "<<sum<<endl;
    for(int i=6;i>0;i--){
        list.remove(i);
        list.print();
    }
    return 0;
}
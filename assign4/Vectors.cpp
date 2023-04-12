/* 
Jana Elmidany 900226145
Assignment 4
Uses vectors, nodes and linked lists
*/

#include <iostream>
#include <vector>
using namespace std;

void insertAfter(int,int,vector<int>&); //looks for a number and inserts new number after it

int main(){
    vector<int> list;
    int n,m,uInput;
    cout<<"How many numbers would you like to input? ";
    cin>>n;
    cout<<"Enter your elements in order: ";
    for(int i=0;i<n;i++){
        cin>>uInput;
        list.push_back(uInput);
    }
    cout<<"Initial list: ";
    for (int i=0; i<list.size();++i){
        cout<<list.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Where would you like to insert another number? ";
    cin>>n;
    cout<<"What number would you like to insert? ";
    cin>>m;
    insertAfter(n,m,list);
    cout<<"Modified list: ";
    for (int i=0; i<list.size();++i){
        cout<<list.at(i)<<" ";
    }

    cout<< endl;
    return 0;
}

void insertAfter(int firstValue, int secondValue, vector<int> &list){
    for(int i=0;i<list.size();i++){
        if(list.at(i)==firstValue){
            list.insert(list.begin()+(i+1),secondValue);
        }
    }
}
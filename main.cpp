#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Node.h"

using namespace std;

int main() {
    int x;
    Node* head= new Node();
    Node* current= head;
    cout<<"enter a list of integers and -1 to stop"<<endl;
    cin>>x;
    //populate the linked list with at least 7 nodes
    while(x!=-1){
       Node* n= new Node(x);
       current->InsertAfter(n);
       current=n; //current=current->getNext;
       cin>>x;

    }

    //print the nodes of the linked list
    current=head->getNext();
    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }

    //1) find the node that has the minimum value
    //current -> getNext -> getValue() !=
    current= head -> getNext() ;
    int currentMin = current-> getValue();



    while(current!= nullptr){
        if (current -> getValue() < currentMin){
            currentMin = current -> getValue();
        }
        current = current -> getNext();
    }
    cout << endl << "q1:" << endl;

    cout << "Current Min:" << currentMin << endl << endl;

    //2) remove the 4th node from the list
    current = head;
    current = current -> getNext();
    current = current -> getNext();
    current = current -> getNext();
    Node *temp = current;
    current = current -> getNext();

    current->InsertAfter(temp);
    delete temp;

    current = head;
    current = current -> getNext();
    cout << endl << "q2:" << endl;

    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }


    //3) remove the last node

    current = head;
   while (current -> getNext() ->getNext() != nullptr)
   {
       current = current->getNext();
   }
   Node * lastGarbage = current->getNext()->getNext();
   delete lastGarbage;
    Node * blah = current;
    blah -> setNext(NULL);

    cout << endl << "q3:" << endl;

    current = head -> getNext();

    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }



    //4) remove the first node
    Node *first = head;
    head=head->getNext();
    first->setNext(nullptr);
    delete first;


    cout << endl << "q4:" << endl;

    current = head;
    current = current->getNext();
    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }


    //5) delete all nodes
/*
delete head;*/
    current = head;
    Node *rest = head -> getNext();
while (current ->getNext() != nullptr){
    rest = rest -> getNext();
    delete rest;

}

    cout << endl << "q5:" << endl;
    current = head->getNext();
    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }
    return 0;
}
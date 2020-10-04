#include<iostream>
using namespace std;

class Node{
    public:
        int key,data;
        Node * Next;

        Node(){
            key = 0;
            data = 0;
            Next = NULL;
        }

        Node(int k, int d){
            key = k;
            data = d;
        }
};

class SingleLinkedList{
    public:
        Node * Head;

        SingleLinkedList(){
            Head = NULL;
        }
        SingleLinkedList(Node * n){
            Head = n;
        }

        //If node already exists

        Node * ifExist(int k){
            Node * temp = NULL;
            Node * ptr = NULL;

            while(ptr!=NULL)
            {
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->Next;
            }

            return temp;
        }

        //Append a node to a linked list

        void appendNode(Node * n){
            if(ifExist(n->key)!= NULL)
            {
                cout<<"Node exist"<<endl;
            }
            else{
                if(Head == NULL)
                {
                    Head = n;
                    cout<<"Node appended"<<endl;
                }
                else{
                    Node * ptr = Head;
                    while(ptr->Next != NULL)
                     {
                        ptr= ptr->Next;
                    }
                    ptr->Next = n;

                    cout<<"Node appended"<<endl;
                }
        }

        //prepend a node

        void prependNode(Node * n){
            if(ifExist(n->key)!= NULL){
                cout<<"Node already exists"<<endl;
            }
            else{
                n->Next = Head;
                Head = n;
                cout<<"Node prepended"<<endl;
            }
        }
};
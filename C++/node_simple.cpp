#include<iostream>
using namespace std;

class Node
{
    public:
        int Value;
        Node * Next;
};

void printNode(Node * node)
{
    while(node != 0)
    {
        cout<<node->Value<<"->";
        node = node->Next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node * node1 = new Node;
    node1->Value = 7;

    Node * node2 = new Node;
    node2->Value = 14;

    Node * node3 = new Node;
    node3->Value = 28;

    node1->Next = node2;
    node2->Next = node3;
    node3->Next = NULL;

    printNode(node1);

    return 0;

}
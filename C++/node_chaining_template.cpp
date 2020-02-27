#include<iostream>
using namespace std;

//Creating template for the class
template<typename T>
class Node
{
    public:
        T Value;
        Node<T> * Next;

        Node(T value) : Value(value), Next(NULL) {}
};
//Creating template for the function
template<typename T>
void printNode(Node<T> * node)
{
    while(node != NULL)
    {
        cout<<node->Value<<"->";
        node = node->Next;
    }

    cout<<"NULL"<<endl;
}

int main()
{
    // +------+------+
    // | 1.73 | NULL |
    // +------+------+
    Node<float> * node1 = new Node<float>(1.73);
    // +------+------+
    // | 3.63 | NULL |
    // +------+------+
    Node<float> * node2 = new Node<float>(3.63);
    // +------+------+
    // | 1    | NULL |
    // +------+------+
    Node<float> * node3 = new Node<float>(1);
    // +------+------+  +------+------+  +------+------+
    // | 1.73 |   +---->| 3.63 | NULL |  | 1    | NULL |
    // +------+------+  +------+------+  +------+------+
    node1->Next = node2;
    // +------+------+  +------+------+  +------+------+
    // | 1.73 |   +---->| 3.63 |   +---->| 1    | NULL |
    // +------+------+  +------+------+  +------+------+
    node2->Next = node3;
    // +------+------+  +------+------+  +------+------+
    // | 1.73 |   +---->| 3.63 |   +---->| 1    |    +----> NULL
    // +------+------+  +------+------+  +------+------+
    node3->Next = NULL;

    printNode(node1);

    return 0;
}

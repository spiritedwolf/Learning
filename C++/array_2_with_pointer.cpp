/*Wrong Output??
Address       Value
0x1d1650        1
0x1d1654        2
0x1d1658        3
0x1d165c        4
0x1d1660        5
0x1d1664        6
0x1d1668        7
0x1d166c        8
0x1d1670        9
0x1d1674        10
0x1d1678        74715753
0x1d167c        18228
0x1d1680        1907136
--------------------------------
Address       Value
0x1d165c        4
0x1d1660        5
0x1d1664        6
0x1d1668        7
0x1d166c        8
0x1d1670        9
0x1d1674        10
0x1d1678        74715753
0x1d167c        18228
0x1d1680        1907136
*/
#include<iostream>
using namespace std;

int main(){
    //Lets suppose we know that we need to create an array of size 10.
    int arraySize = 10;
    //Initilize a pointer to hold an array first element address.
    int * ptr = new int[arraySize] {1,2,3,4,5,6,7,8,9,10};

    //Printing all the array elements by increasing the pointer.
    cout<<"Address\tValue"<<endl;

    while(*ptr)
    {
        cout<<ptr<<"\t";
        cout<<*ptr<<endl;
        ptr++;
    }
    //So now out pointer is 10 steps ahead, now we will make him sit at his home from where he started his journey :p
    ptr=ptr-13;
    cout<<"--------------------------------"<<endl;
    //Print all the element by increasing the ptr index.
    cout<<"Address\tValue"<<endl;
    for(int i = 0;i< arraySize;++i)
    {
        cout<<&ptr[i]<<"\t";
        cout<<ptr[i]<<endl;
    }

    return 0;
}
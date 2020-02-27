#include "list_adt.h"
using namespace std;
//Fetching an item in the List
List::List(): list_count(0) {}

List::~List()
{
    delete[] list_items;
    list_items = NULL;
}

int List::Get(int index)
{
    //Check if the index is out of bound
    if(index<0 || index > list_count)
        return -1;
    
    return list_items[index];
}

//Insertion function for inserting the values in the List
int List::Insert(int index, int val)
{
    //Check if the index is out of bound
    if(index < 0 || index > list_count)
        return -1;

    //Copy the current array
    int * oldArray = list_items;
    //Increasing an array length
    list_count++;
    //Initilizing a new array
    list_items = new int[list_count];
    //Fill the new array with the data
    for(int i=0,j=0; i < list_count;++i)
    {
        if(index == i)
        {
            list_items[i] = val;
        }
        else
        {
            list_items[i] = oldArray[j];
            ++j;
        }
    }
    //Remove copied array
    delete [] oldArray;
}

//Finding out the index of a selected item in the List ADT
int List::Search(int val)
{
    // Looping through the array elements
    // return the array index if value is found
    for(int i=0;i<list_count;++i)
    {
        if(list_items[i] == val)
        {
            return i;
        }
    }
    return -1;
}
//Removing an item from the List ADT
int List::Remove(int index)
{
    if(index < 0 || index > list_count)
        return -1;

    // Copy the current array
    int * oldArray = list_items;
    //Decrease the array length
    list_count--;
    //Initialize  a new array
    list_items = new int[list_count];
    //Fill the new array and remove the given index
    for(int i = 0, j = 0;i<list_count;++i)
    {
        if(index == j)
        {
            ++j;
        }

        list_items[i] = oldArray[j];
    }
    //Remove copied array
    delete [] oldArray;    
}
int List::Count()
{
    return list_count;
}

int main(){
    //Making a new List
    List list = List();

    //Lets add several items
    list.Insert(0,11);
    list.Insert(1,12);
    list.Insert(2,13);
    list.Insert(3,14);
    list.Insert(4,15);
    list.Insert(5,16);

    //Print current List
    for(int i=0;i < list.Count();++i)
    {
        cout<<list.Get(i)<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
/*
➜  /tmp ./lol
11 12 13 14 15 16
*/
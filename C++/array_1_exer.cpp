#include<iostream>
using namespace std;

int main(){
    //Declaring the array with the name arr and giving it values.
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //Access each element
    for(int i=0;i< (sizeof(arr)/sizeof(arr[0]));++i)
    {
        cout<<arr[i]<<" ";
        
    }

    //Let's change the values
    arr[3]=12;
    arr[7]=76;
    cout<<endl;
    //Again accessing the each element
    for(int i=0;i< (sizeof(arr)/sizeof(arr[0]));++i)
    {
        cout<<arr[i]<<" ";
        
    }

    return 0;
}
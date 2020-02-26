#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"Very SImple Calculator"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Division"<<endl;
    cout<<"4. Multiplication"<<endl;
    cout<<"Choose any one option:"<<endl;
    cin>>i;

    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    if(i == 1){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }else if(i == 2){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    }else if(i == 3){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }else if(i == 4){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }else {
        cout<<"Invalid option"<<endl;
    }

    // if(i<100) {
    //     cout<<"The value of i is"<<i<<" and it is smaller than 100"<<endl;
    // } else if(i>100){
    //     cout<<"The value of i is"<<i<<" and it is greater than 100"<<endl;
    // } else {
    //     cout<<"The value of i is equals to the 100"<<endl;
    // }
    
    // cout<<"\nThe value of a is:"<<a<<endl;
    // cout<<"\nThe value of b is:"<<b<<endl;
    return 0;
}
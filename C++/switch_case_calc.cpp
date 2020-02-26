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

    switch(i) {
        case 1:
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
            break;
        case 2:
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        case 3:
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            break;
        case 4:
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
    }
    return 0;
}
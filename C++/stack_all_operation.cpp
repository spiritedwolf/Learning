#include<iostream>
#include<string>

using namespace std;

class Stack{
    private:
        int top;
        int arrr[5];

    public:
        Stack(){
            top = -1;
            for(int i = 0; i < 5; i++)
            {
                arrr[i]=0;
            }
        }

        bool isEmpty(){
            if(top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        bool isFull()
        {
            if(top == 4)
                return true;
            else
            {
                return false;
            }
        }

        void push(int value)
        {
            if(isFull())
            {
                cout<<"Stack oerflow"<<endl;

            }
            else
            {
                top++;
                arrr[top]=value;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack underflow"<<endl;
                return 0;
            }
            else
            {
                int popValue = arrr[top];
                arrr[top] = 0;
                top--;
                return popValue;
            }
        }

        int count()
        {
            return(top+1);
        }

        int peek(int position)
        {
            if(isEmpty())
                cout<<"Stack overflow"<<endl;
            else
                return arrr[position];
        }

        void change(int position, int value)
        {
            arrr[position] = value;
            cout<<"Value change at poistion:"<<position<<endl;
        }

        void display(){
            for(int i=4; i>=0;i--)
            {
                cout<<arrr[i]<<endl;
            }
}


};

int main()
{
    Stack s;
    int option, value, position;
    do
    {
        cout<<"All stack operations"<<endl;
        cout<<"Press 0 for exit"<<endl;
        cout<<"1. push() operation"<<endl;
        cout<<"2. pop() operation"<<endl;
        cout<<"3. isEmpty() operation"<<endl;
        cout<<"4. isFull() operation"<<endl;
        cout<<"5. change() operation"<<endl;
        cout<<"6. peek() operation"<<endl;
        cout<<"7. count() operation"<<endl;
        cout<<"8. display() operation"<<endl;

        cin>>option;
        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Enter the value that you wanted to push on stack"<<endl;
                cin>>value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.isEmpty();
                break;
            case 4:
                s.isFull();
                break;
            case 5:
                cout<<"Enter the value of position:"<<endl;
                cin>>position;
                cout<<"\nEnter the value"<<endl;
                cin>>value;
                s.change(position, value);
                break;
            case 6:
                cout<<"Enter the value of position:"<<endl;
                cin>>position;
                s.peek(position);
                break;
            case 7:
                s.count();
                break;
            case 8:
                s.display();
                break;
            default:
                cout<<"Choose correct option please!";
        }

    } while (option != 0);

return 0;
}

#include<iostream>

using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue()
        {
            rear = -1;
            front = -1;
            for(int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            }
        }

        bool isEmpty()
        {
            if(rear == -1 && front == -1)
                return true;
            else
                return false;            
        }
        bool isFull()
        {
            if(rear == 4)
                return true;
            else
                return false;          
        }

        void enqueue(int value){
            if(isFull())
            {
                cout<<"Queue is full"<<endl;
            }
            else if(isEmpty()){
                rear = 0;
                front = 0;
                arr[rear] = value;
            }
            else{
                rear++;
                arr[rear] = value;
            }
        }

        int dequeue()
        {
            int x;
            if(isEmpty())
            {
                cout<<"Queue is empty"<<endl;
                return 0;
            }
            else if(front == rear)
            {
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
                return x;
            }
            else{
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        int count()
        {
            return(rear-front+1);
        }

        void display(){
            for(int i=4; i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
};

int main()
{
    Queue q1;
    int option, value;
    do
    {
        cout<<"All queue operations"<<endl;
        cout<<"Press 0 for exit"<<endl;
        cout<<"1. isFull() operation"<<endl;
        cout<<"2. isEmpty() operation"<<endl;
        cout<<"3. queue() operation"<<endl;
        cout<<"4. dequeue() operation"<<endl;
        cout<<"5. count() operation"<<endl;
        cout<<"6. display() operation"<<endl;
        

        cin>>option;
        switch(option)
        {
            case 0:
                break;
            case 1:
                if(q1.isFull())
                {
                    cout<<"Queue is full"<<endl;
                }
                else{
                    cout<<"Queue is not full"<<endl;
                }
                break;
            case 2:
                if(q1.isEmpty())
                {
                    cout<<"Queue is empty"<<endl;
                }
                else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            case 3:
                cout<<"Enter the value that you wanted to add"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;
            case 4:
                q1.dequeue();
                break;
            case 5:
                q1.count();
                break;
            case 6:
                q1.display();
                break;
            default:
                cout<<"Choose correct option please!";
        }

    } while (option != 0);

return 0;
}
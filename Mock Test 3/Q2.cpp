

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class queue{
    Node * front, *rear;
    public:
    queue(){
        front = rear =NULL;
    }
    void Enqueue(int d)
    {
        Node* temp = new Node(d);
        if(rear== NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next=temp;
            rear= temp;
        }
        
    }
    int Dequeue(){
        if(front== NULL) return -1;
        else
        {
            int ele=front->data;
            Node* temp=front;
            front=front->next;
            delete (temp);
            return ele;
        }
       
    }
    int isempty()
    {
        if(front == NULL && rear== NULL)
        return 1;
        return 0;
    }
};

int main()
{
    cout<<"1) Enqueue";
    cout<<"2) Dequeue";
    cout<<"3) ISEMPTY";
    queue q;
    char ch;
    do{
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case '1':{
                cout<<"Enter No. to be inserted in queue";
                int p;
                cin>>p;
                q.Enqueue(p);
                break;
            }
            case '2':
            {
                cout<<q.Dequeue();
                break;
            }
            case '3':
            {
                cout<<"whether empty?"<<q.isempty();
                break;
            }
            default: {
                cout<<"Invalid";
            }
        }
        
    }while(ch=='1' ||ch=='2'||ch=='3');

    return 0;
}

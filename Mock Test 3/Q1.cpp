

#include <iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int val)
{
    if(top>n-1)
    cout<<"Stack overflow";
    else{
        stack[++top]=val;
    }
}
void pop()
{
    if(top==-1)  cout<<"Underflow";
    else{
        cout<<"Popped element is"<<stack[top--];
    }
}
bool isempty()
{
    if(top==-1)
    return 1;
    else return 0;
}

int main()
{
    cout<<"1) PUSH";
    cout<<"2) POP";
    cout<<"3) ISEMPTY";
    char ch;
    do{
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case '1':{
                cout<<"Enter No. to be pushed";
                int p;
                cin>>p;
                push(p);
                break;
            }
            case '2':
            {
                pop();
                break;
            }
            case '3':
            {
                cout<<"whether empty?"<<isempty();
                break;
            }
            default: {
                cout<<"Invalid";
            }
        }
        
    }while(ch=='1' ||ch=='2'||ch=='3');

    return 0;
}

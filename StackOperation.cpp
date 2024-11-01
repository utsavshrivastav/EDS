using namespace std;
#include <iostream>
#define SIZE 5

void push();
void pop();
void display();

int Stack[SIZE],top;

int main()
{
    int ch;
    top=-1;
    
    do
    {
        cout<<"1 for push"<<endl;
        cout<<"2 for pop"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"4 for exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch (ch)
        {
        case /* constant-expression */1: push();
            /* code */
            break;
        case 2: pop(); 
        break;

        case 3: display();
        break;

        case 4: break;  
        
        default: cout<<"/n/n Invalid choice";
        
        }
     
        
    } while (ch!=4);
}

void push()
{
    int x;
    if(top==SIZE-1)
    cout<<"/n *** Stack is overflow ***";
    else
    {
        cout<<"/n enter any element";
        cin>>x;
    }
    top++;
    Stack[top]=x;
    cout<<"/n element inserted";
}

void pop()
{
    int x;
    if(top==-1)
    cout<<"/n *** Stack is underflow ***";
    else
    {
        x= Stack[top];
        cout<<"/n deleted element is"<<x;
        top--;
    }
}

void display()
{
    int i;
    if(top==-1)
    cout<<"/n *** Stack is Empty ***";
    else
    {
        cout<<"/n Element of Stack are given below";
        for(i=top; i>=0; i--)
        cout<<"/n  "<<Stack[i];
    }
}
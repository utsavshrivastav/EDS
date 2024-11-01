//write a program to perform all the operation of the stack using linked list(Dynamic stack)

using namespace std;
#include<iostream>

class STACK
{
private:
    /* data */
    int info;
    STACK *next;

public:
    STACK* push(STACK);
    STACK* pop(STACK);
    void display(STACK*);
    
};

 void STACK::display(STACK *temp)
{
    if(temp==NULL)
    cout<<"/n/n stack is empty";
    else
    {
        cout<<"/n Element of Stack are given Below/n/n";
        while (temp!=NULL)
        {
            /* code */
            cout<<temp->info<<endl;
            temp=temp->next;
        }
        
    }
}

STACK* STACK :: push(STACK *top)
{
    STACK *newstack;
    int x;
    newstack = new STACK;
    cout<<"/n Enter any Element";
    cin>>x;
    newstack->info=x;
    newstack->next=top;
    top=newstack;
    cout<<"/nElement inserted";
    return top;

}

STACK* STACK :: pop(STACK *top)
{
    STACK *temp;
    if(top==NULL)
    cout<<"/nStack underflow";
    else
    {
        temp = top;
        top = top->next;
        cout<<"/n deleted element is "<<temp->info;
        delete temp;
    }
    return top;
}

int main()
{
    STACK *top=NULL;
    int ch;
    do
    {
        /* code */
        cout<<"/n/n *********MAIN MENU*******";
        cout<<"/n/n 1 for push";
        cout<<"/n 2 for pop";
        cout<<"/n 3 for display";
        cout<<"/n 4 for exit";
        cout<<"/n/n Enter your choice";
        cin>>ch;

        switch (ch)
        {
        case 1: top = top->push(top);
            /* code */
            break;

        case 2: top = top->pop(top);
              break;

        case 3: top->display(top);
            break;

        case 4: break;              
        
        default: cout<<"/n/n Invalid Choice";
               break;
        }
    } while (ch!=4);
    cout<<"/n/n/n";
}//main();

using namespace std;
#include <iostream>
#define SIZE 5

int cqueue[SIZE], front = -1, rear = -1;

void insert();
void del();
void display();

int main()
{
    int ch;
    do
    {
        /* code */
        cout<<"1 for insert"<<endl;
        cout<<"2 for del"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"4 for exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch (ch)
        {
        case1: insert();
         break;

        case 2: del(); 
        break;

        case 3: display();
        break;

        case 4: break;  
        
        default: cout<<"/n/n Invalid choice";
        }
    }while(ch!=4);
}

void insert()
{
    int x;
    if((front == 0 && rear = SIZE-1) || (front == rear+1))
    {
    cout<<"circular queue are overflow";
    }
    else
    {
       cout<<"enter any element";
       cin>>x;
    }
    if(rear==SIZE-1)
    rear=0;
    else
    rear++;
    cqueue[rear]=x;
    cout<<"element inserted";
    if(front==1)
    front=0;
}

void del()
{
    int x;
    if(front==1)
    cout<<"circular queue is underflow";
    else
    {
        x=cqueue[front];
        cout<<"Deleted element is<<x";
        if(front==rear)
        front=rear=-1;
        else if(front==SIZE-1)
        front=0;
        else
        front++;
    }
}

void display()
{
    int i;
    if(front==-1)
    cout<<"Circular Queue is Empty";
    else
    {
        cout<<"Element of circular Queue are given Below";
        if(front<=rear)

        for(i=front;i<=rear;i++)
        cout<<" " << cqueue[i];

        for ( i = 0; i < rear; i++)
        {
            /* code */
            cout<<" "<<cqueue[i];
        }
        

    }
}

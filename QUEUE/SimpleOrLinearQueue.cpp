using namespace std;
#include <iostream>
#define SIZE 5

void insert();
void del();
void display();

int queue[SIZE],front,rear;

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
    if(rear==SIZE-1)
    {
    cout<<"queue is overflow";
    }
    else
    {
        cout<<"enter any element";
        cin>>x;
        rear++;
        queue[rear]=x;
        cout<<"element inserted";
        if(front==1)
        front=0;

    }
}

void del()
{
    int x;
    if(front==-1)
    cout<<"queue is underflow";
    else
    {
        x=queue[front];
        cout<<"deleted element is"<<x;
        if(front==rear)
        front=rear=-1;
        else
        front++;

    }
}

void display()
{
    int i;
    if(front==-1)
    cout<<"queue is empty";
    else
    {
        cout<<"element of queue are given below";
        for ( i = 0; i < rear; i++)
        {
            /* code */
            cout<<" "<<queue[i];
        }
        

    }
}
         

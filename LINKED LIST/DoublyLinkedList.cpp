using namespace std;
#include<iostream>

class NODE
{
private:
    /* data */
    NODE *prev;
    int info;
    NODE *next;
public:
    NODE* create(NODE*);
    void display_fwd(NODE*);
    void display_bkwd(NODE*);
};

NODE* NODE:: create(/* args */NODE *start)
{
    NODE *temp,*newnode;
    int x;
    char ch;
    cout<<"/n do you want to create a node y /n";
    cin>>ch;
    while (ch=='y'||ch=='Y')
    {
        /* code */
        newnode=new NODE;
        cout<<"enter any element ";
        cin>>x;
        newnode=new NODE;
        cout<<"Enter any Element";
        cin>>x;
        newnode->info=x;
        newnode->next=NULL;

        if(start==NULL)
        {
            newnode->prev=NULL;
            start=newnode;
        }
        else
        {
            newnode->prev=temp;
            temp->next=newnode;
        }
        temp=newnode;
        cout<<"/n Element Inserted";

        cout<<"/n do you want to create another node y /n";
        cin>>ch;
    }
    return start;
    
}

 void NODE:: display_fwd(NODE *temp)
{
    if(temp==NULL)
    cout<<"/n/n doubley linked list is empty ";
    else
    {
        cout<<"/n Element of doubley linked list in Froward order are given below /n/n";
        while (temp!=NULL)
        {
            /* code */
            cout<<temp->info<<" ";
            temp=temp->next;
        }
        
    }
}

void NODE :: display_bkwd(NODE *temp)
{
    if(temp==NULL)
    cout<<"/n/n doubley linked list is empty";
    else 
    {
        while(temp->next!=NULL)
        temp=temp->next;
        cout<<"/n element of doubley linked list in backward order are given below/n/n";
        while (temp!=NULL)
        {
            /* code */
            cout<<temp->info<<" ";
            temp=temp->prev;
        }
        
    }
}

int main()
{
    NODE *start=NULL;

    start= start->create(start);
    start->display_fwd(start);
    start->display_bkwd(start);

    cout<<"/n/n/n";
}//main

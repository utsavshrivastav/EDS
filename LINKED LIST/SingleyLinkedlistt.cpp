/*
//Write a Program to create and display singley linked list
 //struct NODE
{
    /* data *
    int info;
    NODE *next;
};

NODE* create(NODE *);
void display(NODE *);

int main()
{
    NODE *start=NULL;
    start=create(start);
    display(start);
}

NODE* create(NODE *start)
{
   NODE *temp,*newnode;
   int x,ch;
   cout<<"Do you want to creaate a node press 1";
   cin>>ch;

   while (ch==1)
   {
    /* code *
    newnode=new NODE;
    cout<<"Enter any Element";
    cin>>x;
    newnode->info=x;
    newnode->next=NULL;
    if(start=NULL)
    start=newnode;
    else
    temp->next=newnode;
    temp=newnode;
    cout<<"Element Inserted";
    cout<<"Do you want to create another node press 1";
    cin>>ch;
   }
   return start;
   
}

void display(NODE *temp)
{
    if(temp==NULL)
    cout<<"Singley linked list is empty";
    else{
        cout<<"Element of Singley linkked list are given Below";
        while (temp!=NULL)
        {
            cout<<temp->info<<" ";
            temp=temp->next;
        }
        
    }
}
*/
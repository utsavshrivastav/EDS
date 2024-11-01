using namespace std;
#include <iostream>

class NODE
{
private:
  /* data */
  int info;
  NODE *next;

public:
  NODE* create(NODE*);
  NODE* insert_beg(NODE*);
  NODE* insert_end(NODE*);
  NODE* insert_sp(NODE*);
  NODE* del_beg(NODE*);
  NODE* del_end(NODE*);
  NODE* del_sp(NODE*);
  NODE* display(NODE*);
  NODE* count(NODE*);
  NODE* Search(NODE*,int);
};

NODE* NODE :: create(NODE *start)
{
  NODE *temp,*newnode;
  int x;
  char ch;
  cout<<"do you want to create a node y "<<endl;
  cin>>ch;
  while (ch=='y' || ch=='Y')
  {
    /* code */
    newnode=new NODE;
    cout<<"Enter any element ";
    cin>>x;
    newnode->info=x;
    newnode->next=NULL;

    if(start==NULL)
    start = newnode;
    else
    temp->next=newnode;
    
    temp = newnode;
    cout<<"Element inserted "<<endl;
    cout<<"Do you want to create another node y "<<endl;
    cin>>ch;
  }
  return start;
}

NODE* NODE :: display(NODE *temp)
{
  if(temp==NULL)
  cout<<"Singly linked list is empty "<<endl;
  else{
    cout<<"Elements of Singly linked list are given below "<<endl;
    while (temp!=NULL)
    {
      /* code */
      cout<<temp->info<<" ";
      temp = temp->next;
    }
  }
 }

 NODE* NODE :: insert_beg(NODE *start)
 {
  NODE *newnode;
  int x;
  newnode->info=x;
  newnode->next=start;
  start = newnode;
  cout<<"Element inserted ";
  return start;
 }

 NODE* NODE::insert_end(NODE *start)
 {
  NODE *newnode,*temp;
  int x;
  newnode=new NODE;
  cout<<"Enter any element : ";
  cin>>x;
  newnode->info=x;
  newnode->next=NULL;
  if(start==NULL)
  start=newnode;
  else
  {
    temp = start;
    while(temp->next!=NULL)
    temp = temp->next;

    temp->next=newnode;
  }
  cout<<"Element inserted ";
  return start;
 }

 NODE* NODE :: insert_sp(NODE * start)
 {
  NODE *newnode,*temp;
  int x,i,c,pos;
  cout<<"Enter any position ";
  cin>>pos;
  c=count(start);
  if(pos<1 || pos>c+1)
  {
    cout<<"Invalid position"<<endl;
    return start;
  }
  newnode = new NODE;
  cout<<"enter any element : "<<endl;
  cin>>x;
  newnode->info=x;

  if(pos==1)
  {
    newnode->next=start;
    start = newnode;
  }
  else{
    temp = start;
    for(i=1;i<pos-1;i++)
    temp = temp->next;

    newnode->next= temp->next;
    temp->next=newnode;
  }
  cout<<"Elment inserted ";
  return start;
 }

 NODE* NODE :: del_beg(NODE *start)
 {
  NODE *temp;
  if (start==NULL)
  {
    /* code */
    cout<<"Singly linked list is empty "<<endl;
  }
  else{
    temp = start;
    start= start->next;
    cout<<"Deleted Element is "<<temp->info;
    delete temp;
       }
       return start;
 }

 NODE * NODE :: del_end(NODE *start)
 {
  NODE *temp,*current;
  if(start==NULL)
   cout<<"Slightly linked list is empty ";
   else{
    temp = start;
    if(start->next==NULL)
    start = start->next;
    else
    {
      while (temp->next!=NULL)
      {
        /* code */
        current = temp;
        temp = temp->next;
      }
      current->next = temp->next;      
    }
    cout<<"Deleted element is "<<temp->info;
    delete temp;
   }
   return start;
 }

 NODE* NODE :: del_sp(NODE *start)
 {
  NODE *current,*temp;
  int x,i,c,pos;
  cout<<"Enter any position ";
  cin>>pos;
  c = count(start);
  if (pos<1 || pos>c)
  {
    /* code */
    cout<<"Invalid position ";
    return start;
  }
  temp = start;
  if(pos==1)
    start = start->next;
    else{
      for(i=1;i<pos;i++)
      {
        current = temp;
        temp = temp->next;
      }
      current->next = temp->next;
    }
    cout<<"Deleted element is "<<temp->info;
    delete temp;
    return start;
}

NODE* NODE :: count(NODE *temp)
{
  int c=0;
  while (temp!=NULL)
  {
    /* code */
    c++;
    temp = temp->next;
  }
  return temp;
}

NODE* NODE :: Search(NODE *temp,int x)
 {
  int flag =0;
  while(temp!=NULL)
  {
    int flag = 0;
    while (temp!=NULL)
    {
      if(x==temp->info)
      {
        flag = 1;
        break;
      }
      temp=temp->next;
    }
    return temp;   //flag hoga ki nahi chek kar lena ek baar
  }

  int main()
  {
    NODE *start=NULL;
    int ch,x,flag;
    start = start->create(start);

    do
    {
      cout<<"/n/n**** MAIN MENU*****";
      cout<<"/n/n 1 for insert at begining";
      cout<<"/n 2 for insert at end";
      cout<<"/n 3 for insert at specific position ";
      cout<<"/n 4 for delete for begining";
      cout<<"/n 5 for delete from end";
      cout<<"/n 6 for delete at specific position";
      cout<<"/n 7 for display";
      cout<<"/n 8 for count total no nodes";
      cout<<"/n 9 for search a particular element ";
      cout<<"/n 10 for exit";
      cout<<"/n/nEnter your choice : ";
      cin>>ch;

      switch (ch)
      {
        case 1:start = start->insert_beg(start);  /* code */
            break;
        case 2: start = start->insert_end(start);
              break;
        case 3: start = start->insert_sp(start);
              break;
        case 4: start = start->del_beg(start);
              break;
        case 5: start = start->del_end(start);
              break;
        case 6:start = start->del_sp(start);
              break:
        case 7:start->display(start);
              break;
        case 8: x=start->count(start);
                 cout<<"/nTotal no of nodes is "<<x;
                break;

        case 9: cout<<"enter any element to be search :";
                 cin>>x;
                 flag=start->search(start,x);
                 if(flag==0)
                 cout<<"/n element not found";
                 else
                 cout<<"/nElement found";
                 break;
        
        case 10 : break;

        default: cout<<"/n/n Invalid choice";
      }//switch
    
    } while (ch!=10);
      /* code */
      cout<<"/n/n/n";
  } //main();
 

  
    

         

      
  


 


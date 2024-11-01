/*
followinng are the operation performed on arrays--
READ
DISPLAY
APPEND/ADD
INSERT
DELETE
SEARCH
SORT

*/
using namespace std;
#include <iostream>

int a[10],total_elem; //declare as global variable

void read();
void display();
void append();
void insert();
void del();
void search();

int main()
{
    int ch;
    read();
    do
    {
        /* code */
     cout<<"/n/n 1 for display"; 
     cout<<"/n/n 2 for append"; 
     cout<<"/n/n 3 for insert"; 
     cout<<"/n/n 4 for delete"; 
     cout<<"/n/n 5 for Search"; 
     cout<<"/n/n 6 for exit"; 
     cout<<"/n/n Enter Your Choice"; 
     cin>>ch;
     switch (ch)
     {

     case 1: display();
     break;

     case 2: append();
     break;

     case 3: insert();
        /* code */
        break;

     case 4: del();
     break;

     case 5: search(); 
     break;

      case 6: break;  
     
     default: cout<<"/n Invalid choice";
        
     }  
    } while (ch!=6);
}


void read()
{
    int i,n;
    cout <<"/n Enter no of element(max 10)";
    cin>>n;
    cout<<"/n Enter "<<n<<"value of array";
    for ( i = 0; i < n; i++)
    cin>>a[i];
    total_elem=n;
}

void display()
{
    int i;
    if(total_elem!=0)
    {
        cout<<"/n Element of array are given below/n/n";
        for(i=0;i<total_elem;i++)
        cout<<a[i] <<" ";
    }
    else
    cout<<"/n arrays is empty";
}

void append()
    {
      if(total_elem!=10)
      {
        cout<<"/n enter any element to append:";
        cin>> a[total_elem];
        cout<<"/n Element added";
        total_elem;
      }
      else
      cout<<"/n Array is full";
    }
     
     void insert()
     {
        int x,i,index;
        cout<<"/n Enter any element and its index: ";
        cin>>x>>index;
        if(total_elem!=10 && index<=total_elem)
        {
            for ( i = total_elem-1 ; i >= index; i--)
            a[i+1]=a[i];
            a[index]=x;
            cout<<"/n Element inserted";
            total_elem++;
        }
        else
        cout<<"/n Invalid index or array is full";
     }

     void del()
     {
        int x,index,i;
        cout<<"/n Enter any index to delete an element";
        cin>>index;
        if(index<total_elem)
        {
            x=a[index];
            for ( i = index+1; i < total_elem; i++)
            a[i-1]=a[i];
            cout<<"/n Deleted Element is "<< x;
            total_elem --;
        }
        else
        cout<<"/n Invalid index";
     }

     void search()
        {
         int flag=0,x,i;
         cout<<"/n Enter any element to be search";
         cin>>x;
         for(i=0;i< total_elem;i++)
          if(x==a[i])
          {
            flag=1;
            break;
          }
          if (flag==0)
          cout<<"/n element not found";
          else
          cout<<"/n Element found";
        }
        

/*
ALGORITHUM  TECHNIQUE --

a. SEACHING TECHNIQUE-
 1. LINEAR SEARCH
 2. BINARY SEARCH

b. SORTING TECHNIQUE-
  1.BUBBLE SORT 
  2.SELECTION SORT
  3.INSERTION SORT
  4.MERGE SORT
  5.HEAP SORT
  6.QUICK SORT

*/

//               ******* LINEAR SEARCH *******


using namespace std;
#include<iostream>

int main()
{
    int a[10];
    int i,x,flag=0;
    cout<<"Enter value of 1-D Arrays"<<endl;

    for ( i = 0; i <= 4; i++)
    cin>>a[i];
    
    cout<<"Enter any Element to be Search";
    cin>>x;

    for ( i = 0; i <= 4 ; i++)
        if (x==a[i])
        {
            /* code */
            flag=1;
            break;
        }

        if (flag==0)
        {
            /* code */
            cout<<"Element not found";
        }
        else
        {
            cout<<endl<<endl;
        }
        
        
    
}
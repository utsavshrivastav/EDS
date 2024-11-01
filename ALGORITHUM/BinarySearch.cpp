//data must be arrange in Acending order amd Decending order-

using namespace std;
#include<iostream>

class binary_search
{
private:
    /* data */
    int a[10],i,x,lower,upper,mid,flag;

public:
    binary_search()
    {
        lower=0;
        upper=9;
        flag=0;
    }
    void read();
    void search();
};


void binary_search::read()
{
    cout<<"Enter 10 value of 1-d Array in Ascending order";
    for (i = 0; i <=0; i++)
     cin>> a[i];
    
}

 void binary_search:: search()
{
    cout<<"Enter any element to be search";
    cin>>x;

    mid=(lower+upper)/2;
    while (lower<=upper && flag==0)
    {
        /* code */
        if(x==a[mid])
        {
            flag=1;
            break;
        }
        else if (x<a[mid])
        {
            /* code */
            upper=mid-1;
        }
        else
        lower=mid+1;

        mid=(lower+upper)/2;        
    }

    if (flag==0)
    {
        /* code */
        cout<<"Element not found";

    }
        else
        {
        cout<<" Element found ";
        }
    }
   /*   error show kr raha hain isliye comment kr diya hain abi ke liye.
   
    int main()
    {
        binary_search bs;
        bs.read();
        bs.search();
        cout<<endl<<endl;
    }


    */
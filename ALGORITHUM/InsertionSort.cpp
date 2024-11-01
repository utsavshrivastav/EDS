using namespace std;
#include<iostream>

int main()
{
    int a[5],i,j,temp;
    cout<<"Enter any 5 value of arrays"<<endl;
    for(i=1;i<=4;i++)
    cin>>a[i];

    for(i=1;i<=4;i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0 && temp<a[j])
        {
            /* code */
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        
    }
    cout<<"/n/nSorted Element are given below/n/n";
    for ( i = 0; i <= 4; i++)
     cout<<a[i]<<" ";

     cout<<endl<<endl;
    
}
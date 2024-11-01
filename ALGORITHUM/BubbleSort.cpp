// arrange krna padenaga phele either in Acending or Decending order

using namespace std;
#include<iostream>

int main()
{
    int a[5],i,j,temp;
    cout<<"enter 5 value of Arrays";
    for ( i = 0; i <=4; i++)
     cin>>a[i];

     for ( i = 0; i <= 4; i++)
       for(j=0;j<=4-i;i++)
        if(a[j]>a[j+1])
        {
            temp=a[i];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        cout<<"Sorted element are given below/n/n/n";
        for ( i = 0; i <=4; i++)
            cout<<a[i]<<" ";

            cout<<"/n/n/n";
        
        
     
    
}
using namespace std;
#include<iostream>

int main()
{
    int a[5],i,j,temp,loc,min;
    cout<<"Enter 5 value of arrays"<<endl;

    for(i=0;i<=4;i++)
    cin>>a[i];

    for(i=0;i<=4;i++)
    {
        min=a[i];
        loc=i;
    for(j=i+1;j<4;j++)
    if (min<a[i])
    {
        /* code */
        min=a[j];
        loc=j;
    }
    if (i!=loc)
    {
        /* code */
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    
        
    }
 cout<<"/n/nSorted Element are given Below/n/n";
   for ( i = 0; i <= 4; i++)
      cout<<a[i]<<" ";

      cout<<endl<<endl;
      
}
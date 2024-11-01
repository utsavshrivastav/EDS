using namespace std;
#include<iostream>
#define SIZE 4

void split(int[],int,int);
void merge(int[],int,int,int);

int main()
{
    int a[SIZE],lower=0,upper=3,i;
    cout<<"Enter "<<SIZE<<" value of Array"<<endl;

    for(i=0;i<SIZE;i++)
        cin>>a[i];

    cout<<"/nEnter of Array are: ";
    for ( i = 0; i <= SIZE; i++)
    {
        /* code */
        cout<<" "<<a[i];
    }
    split(a,lower,upper);

    cout<<"/n Sorted element are :";
    for ( i = 0; i <= SIZE; i++)
    {
        /* code */
        cout<<" "<<a[i];
    }
    cout<<endl<<endl<<endl;
    
        
}

void split(int a[], int lower,int upper)
{
    int mid;
    if(lower<upper)
    {
        mid=(lower+upper)/2;
        split(a,lower,mid);
        split(a,mid+1,upper);
        merge(a,lower,mid,upper);
    }
}

void merge(int a[],int lower,int mid,int upper)
{
    int i,j,k,temp[SIZE];
    i=lower;
    j=mid+1;
    k=lower;

    while (i<mid && j<=upper)
    {
        /* code */
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while (j<=upper)
    {
        /* code */
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=lower;i<=upper;i++)
    a[i]=temp[i];
    
}
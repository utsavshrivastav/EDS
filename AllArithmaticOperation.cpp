using namespace std;
#include <iostream>
int main()
{
    int a,b,c,ch;
    do
    {
        /* code */
        cout << "/n/n Enter the value of a and b";
        cin>>a>>b;

        cout<<"/n 1 for Addition";
        cout<<"/n 2 for Subtraction";
        cout<<"/n 3 for Multiplication";
        cout<<"/n 4 for Division";
        cout<<"/n 5 for Exit";

        cout<<"/n/n Enter your choice";
        cin>>ch;

        switch (ch)
        {
        case /* constant-expression */1: c=a+b;
            /* code */ cout<<"/n Sum= "<<c;
            break;

        case 2: c=a-b;
        cout<<"/n sub= " <<c;
        break;
        
        case 3: c=a*b;
        cout<<"/n mul= "<<c;
        break;

        case 4: c=a|b;
        cout<<"/n div= " <<c;
        break;

        case 5: break;
        
        default: cout<<"/n/n Invalid choice /n";
        
        } //Switch case end
    }

while (ch!=5);
}


    

    


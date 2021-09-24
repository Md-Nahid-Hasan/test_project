#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i;
    cout<<"Enter Number: ";
    cin>>a;
    if(a>1)
    {
       for(i=2;i<=a;i++)
        {
        if(a%i==0)
            {
                cout<<a<<" is not Prime "<<endl;
                break;
            }
        else
            {
                cout<<a<<" is Prime number"<<endl;
                break;
            }
        }
    }

    else
    {
        cout<<"\n Please enter greater than 1"<<endl;
    }
    return 0;
}

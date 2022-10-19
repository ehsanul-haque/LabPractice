#include <iostream>
using namespace std;
int main()
{


    int i,sum=1,n;
    char exit;

    for(; ;){
    cout<<"Enter a Number : ";
    cin>>n;

    for (i=n; i>=1; i--)
    {
        cout<<i;
        if(i>1)
        {
            cout<<"*";
        }
        sum=sum*i;


    }
    cout<<endl;
    cout<<"Factorial: "<<sum;
    cout<<"Enter n to exit";
    cin>>exit;
    if(exit=='n'){
        break;
    }

    }

}

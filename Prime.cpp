#include <iostream>
using namespace std;
int main()
{
    int count = 0, i, number;
    cout<<"Enter a number";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime";
    }

    return 0;
}
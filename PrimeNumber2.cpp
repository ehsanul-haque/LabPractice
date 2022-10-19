#include <iostream>
using namespace std;
int main()
{
    int i, number;
    bool isPrime = true;
    cout << "Enter a number";
    cin >> number;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    bool prime = true;
    if (number <= 1)
    {
        prime = false;
    }
    for (int i = 2; i * i < number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
        }
    }
    if (prime == true)
    {
        cout << number << " is a Prime Number" << endl;
    }
    else
    {
        cout << number << " is Not Prime Number" << endl;
    }

    return 0;
}

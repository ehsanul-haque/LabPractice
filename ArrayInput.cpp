#include <iostream>
using namespace std;
int main()
{
    int n, num, i;
    cout << "Enter how many elements you want to add into array : ";

    cin >> n;
    while ((n % 2 != 0) || (n <= 1))
    {
        cout << "Enter a even number : ";
        cin>>n;
    }
    n = n + 1;
    int array[n];

    for (i = 0; i < n; i++)
    { cout<<"Enter element no "<<i<<" : ";
         ;
        cin >> num;
        array[i] = num;
    }
    for (i = 0; i < n; i++)
    {

        cout << array[i];
    }

    return 0;
}
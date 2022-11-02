#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, second = 1, fibo = 0;
    cout << "Enter a Range";
    cin >> num;
    for (; first <= num;)
    {
        cout << first << " ";
        fibo = first + second;
        first = second;
        second = fibo;
    }
     /*  while (first <= num)
    {

        cout << first << " ";
        fibo = first + second;
        first = second;
        second = fibo;
    }*/ 
    
    return 0;
}

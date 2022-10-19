#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, second = 1, fibo = 0;
    cout << "Enter a Range";
    cin >> num;
    for (; fibo <= num;)
    {
        cout << first << " ";
        fibo = first + second;
        first = second;
        second = fibo;
    }
     /*  while (fibo <= num)
    {

        cout << first << " ";
        fibo = first + second;
        first = second;
        second = fibo;
    }*/ 
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int numbers[7] = {
      1,
      2,
      3,
      3,
      5,
      1,
  };
  int row, col, count = 0;
  for (row = 0; row < 7; row++)
  {
    for (col = 7; col >= 0; col--)
    {
      if (numbers[row] == numbers[col])
      {
        count++;
      }
    }
    cout << count;
    return 0;
  }
}
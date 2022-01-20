#include <iostream>
using namespace std;

void dop3()
{
  double x, min = 9999, max = -9999;
  int minIndex, maxIndex;

  for (int i = 1; i <= 5; i++)
  {
    cin >> x;

    if (min > x)
    {
      min = x;
      minIndex = i;
    }

    if (max < x)
    {
      max = x;
      maxIndex = i;
    }
  }

  cout << "Максимальное значение = " << max << endl;
  cout << "Минимальноее значение = " << min << endl;
}
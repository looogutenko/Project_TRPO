#include <iostream>
using namespace std;

void min()
{
  double x, min = 9999, max = -9999;
  int minIndex, maxIndex;

  cout << "������� 5 ����� ����� (������� �� �������!!!):" << endl;

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

  cout << "������������ �������� = " << max << endl;
  cout << "������������ �������� = " << min << endl;
}
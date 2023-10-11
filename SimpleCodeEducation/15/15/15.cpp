#include <iostream>
using namespace std;

void main()
{
  int a = 0;

  do
  {
    cout << "a = " << a << endl;

    a++;
  } while (a < 10);

  //====================== HomeWork 1==============================

  int position = 0;
  int counter;
  char c;
  int linetype;

  cout << "Enter a line symbol" << endl;
  cin >> c;
  cout << "Enter a line length" << endl;
  cin >> counter;
  cout << "Enter a line type: 1 - vertical, 2 - horizontal" << endl;
  cin >> linetype;

  if (linetype != 1 && linetype != 2)
  {
    cout << "Invalid linetype, finishing..." << endl;
  }
  else
  {
    while (position < counter)
    {
      if (linetype == 1)
      {
        cout << c << endl;
      }
      else
      {
        cout << c;
      }

      position++;
    }
  }

  //====================== HomeWork 2==============================

  int interval_from, interval_to;
  int sum = 0;

  cout << "Enter left interval border" << endl;
  cin >> interval_from;
  cout << "Enter right interval border" << endl;
  cin >> interval_to;

  while (interval_from <= interval_to)
  {
    if (interval_from % 2 != 0)
    {
      sum += interval_from;
    }

    interval_from++;
  }

  cout << "Result: " << sum << endl;
}
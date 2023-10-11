#include <iostream>
using namespace std;

void main()
{
  for (int i = 1; i < 5; i++)
  {
    cout << "Cycle 1, Iteration N " << i << endl;

    for(int j = 1; j < 5; j++)
    {
      cout << "\tCycle 2, Iteration N " << j << endl;
    }
  }

  //============================ HomeWork ================================

  int length, width;
  char symbol;

  cout << "Enter rechtangle length" << endl;

  cin >> length;

  cout << "Enter rechtangle width" << endl;

  cin >> width;

  cout << "Enter drawing symbol'" << endl;

  cin >> symbol;

  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << symbol;
    }

    cout << endl;
  }
}
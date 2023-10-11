#include <iostream>
using namespace std;

void main()
{
    cout << "One" << endl;

    goto link;

    cout << "Two" << endl;

    cout << "Three" << endl;

    link:

    cout << "Foor" << endl;

    cout << "Five" << endl;
}


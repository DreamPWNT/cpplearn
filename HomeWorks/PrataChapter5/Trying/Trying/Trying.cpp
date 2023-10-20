#include <iostream>
#include <string>

using namespace std;

void main()
{
  const int size = 16;
  long long factorials[size];

  factorials[0] = factorials[1] = 1LL;

  for (int i = 2; i < size; i++)
  {
    factorials[i] = i * factorials[i - 1];
  }

  for (int i = 0; i < size; i++)
  {
    cout << i << "! = " << factorials[i] << endl;
  }

  string str1;

  cout << "Enter a string: ";
  getline(cin, str1);

  for (int i = str1.size() - 1; i >= 0; i--)
  {
    cout << str1[i];
  }

  cout << "Finished!!!";

  char word1[10] = "^ello";
  cout << "String equal is = " << strcmp(word1, "Hello") << endl;

  for (char ch = 'a'; strcmp(word1, "Hello"); ch++)
  {
    cout << word1 << endl;
    word1[0] = ch;
  }

  cout << "Finish word is: " << word1 << endl;
 
  char str2[100];
  int counter = 0;

  cout << "Enter favorite drink: ";
  cin >> str2;
  cout << "Your ASCII ^_^ drink is: " << endl;

  while (str2[counter])
  {
    cout << str2[counter] << ": " << int(str2[counter]) << endl;

    counter++;
  }

  int values[10] = { 1,5,4,67,34,7,34,9,76,487923 };

  for (int x : values)
  {
    cout << x << endl;
  }

  int character_counter = 0;
  char ch;

  cout << "Etner character (# to quit): ";
  

  while (cin.get(ch))
  {
    cout << ch;
    ++character_counter;
    
    if (ch == '#')
    {
      break;
    }
  }

  cout << character_counter << " readed." << endl;

}
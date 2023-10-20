#include <iostream>
#include <string>
#include <array>

using namespace std;

void main()
{
  //=============================================== Excercise 1 ===============================================

  const int size = 30;

  char first_name[size];
  char last_name[size];
  char grade;
  int age;

  cout << "What is your first name? ";
  cin.getline(first_name,size);
  cout << "What is your last name? ";
  cin.getline(last_name, size);
  cout << "What letter grade do you deserve? ";
  cin >> grade;
  grade = grade + 1;
  cout << "What is your age? ";
  cin >> age;
  cout << "Name: " << last_name << ", " << first_name << endl;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;
  
  //=============================================== Excercise 2 ===============================================

  //const int size = 30;

  string first_name;
  string last_name;
  char grade;
  int age;

  cout << "What is your first name? ";
  getline(cin, first_name);
  cout << "What is your last name? ";
  getline(cin, last_name);
  cout << "What letter grade do you deserve? ";
  cin >> grade;
  grade = grade + 1;
  cout << "What is your age? ";
  cin >> age;
  cout << "Name: " << last_name << ", " << first_name << endl;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;
  
  //=============================================== Excercise 3 ===============================================

  const int size = 30;
  const int result_size = 100;

  char first_name[size];
  char last_name[size];
  char result[result_size] = {};

  cout << "What is your first name? ";
  cin.getline(first_name,size);
  cout << "What is your last name? ";
  cin.getline(last_name,size);
  
  //strcpy_s(result, last_name);
  strcat_s(result, sizeof(result), last_name);
  strcat_s(result, sizeof(result), ", ");
  strcat_s(result, sizeof(result), first_name);
  //strcat(result, ", ");
  //strcat(result, first_name);

  cout << "Here's the information in a singlie string: " << result << endl;
  
  //=============================================== Excercise 4 ===============================================

  string first_name;
  string last_name;
  string result;

  cout << "What is your first name? ";
  getline(cin, first_name);
  cout << "What is your last name? ";
  getline(cin, last_name);

  result = last_name + ", " + last_name;

  cout << "Here's the information in a singlie string: " << result << endl;
  
  //=============================================== Excercise 5 ===============================================

  struct CandyBar {
    string name;
    float weight;
    int calories_quantity;
  };

  CandyBar snack = { "Kosolapiy beer", 30.23, 129 };

  cout << "Candy name is: " << snack.name << ", weighted " << snack.weight << " gr. consists " << snack.calories_quantity << " calories" << endl;
  
  //=============================================== Excercise 6 ===============================================

  struct CandyBar {
    string name;
    float weight;
    int calories_quantity;
  };

  CandyBar snack[3] = {
    {"Kosolapiy beer", 30.23, 129},
    {"Red Hat", 15.6, 117},
    {"Karakum", 28.91, 105},
   };

  cout << "First candy name is: " << snack[0].name << ", weighted " << snack[0].weight << " gr. consists " << snack[0].calories_quantity << " calories" << endl;
  cout << "Second candy name is: " << snack[1].name << ", weighted " << snack[1].weight << " gr. consists " << snack[1].calories_quantity << " calories" << endl;
  cout << "Third candy name is: " << snack[2].name << ", weighted " << snack[2].weight << " gr. consists " << snack[2].calories_quantity << " calories" << endl;
  
  //=============================================== Excercise 7 ===============================================
  
  struct Pizza {
    string company_name;
    int diameter;
    int weight;
  };

  Pizza margarita;

  cout << "Enter a pizza diameter: ";
  cin >> margarita.diameter;
  cin.get();
  cout << "Enter a pizza manufacturer: ";
  getline(cin, margarita.company_name);  
  cout << "Enter a pizza weight: ";
  cin >> margarita.weight;
  cout << "You pizza manufacturer is " << margarita.company_name << ", diameter is " << margarita.diameter << " sm. and weight is " << margarita.weight << " gr.";
  
  //=============================================== Excercise 8 ===============================================

  struct Pizza {
    string company_name;
    int diameter;
    int weight;
  };

  Pizza *margarita = new Pizza;
  
  cout << "Enter a pizza diameter: ";
  cin >> margarita->diameter;
  cin.get();
  cout << "Enter a pizza manufacturer: ";
  getline(cin, margarita->company_name);
  cout << "Enter a pizza weight: ";
  cin >> margarita->weight;
  cout << "You pizza manufacturer is " << margarita->company_name << ", diameter is " << margarita->diameter << " sm. and weight is " << margarita->weight << " gr.";

  delete margarita;
  
  //=============================================== Excercise 9 ===============================================

  struct CandyBar {
    string name;
    float weight;
    int calories_quantity;
  };

  CandyBar *snacks = new CandyBar[3] {
    {"Kosolapiy beer", 30.23, 129},
    {"Red Hat", 15.6, 117},
    {"Karakum", 28.91, 105},
  };

  cout << "First candy name is: " << snacks[0].name << ", weighted " << snacks[0].weight << " gr. consists " << snacks[0].calories_quantity << " calories" << endl;
  cout << "Second candy name is: " << snacks[1].name << ", weighted " << snacks[1].weight << " gr. consists " << snacks[1].calories_quantity << " calories" << endl;
  cout << "Third candy name is: " << snacks[2].name << ", weighted " << snacks[2].weight << " gr. consists " << snacks[2].calories_quantity << " calories" << endl;

  delete[] snacks;

  //=============================================== Excercise 10 ===============================================

  array<double, 3> results;

  cout << "Enter a 1st result of race: ";
  cin >> results[0];
  cout << "Enter a 2nd result of race: ";
  cin >> results[1];
  cout << "Enter a 3rd result of race: ";
  cin >> results[2];
  cout << "Results of 3 races is: " << results[0] << ", " << results[1] << ", " << results[2] << "." << endl;

}

#include <iostream>
using namespace std;

int main()
{
  //============================ Excercise 1 ===================================

  int size;
  const int inches_in_foot = 12;

  cout << "Enter size in inches: ";
  cin >> size;
  cout << "Your size = " << size / 12 << " foots and " << size % 12 << " inches" << endl;

  //============================ Excercise 2 ===================================

  int foots, inches, founts;
  double height, weight, bmi;

  cout << "Enter foot size: ";
  cin >> foots;  
  cout << "Enter inches size: ";
  cin >> inches;  
  cout << "Enter founts size: ";
  cin >> founts;
  cout << endl;

  height = (foots * 12 + inches) * 0.0254;
  weight = founts / 2.2;
  bmi = weight / (height * height);

  cout << "You BMI is: " << bmi << endl;

  //============================ Excercise 3 ===================================

  double degrees, minutes, seconds, result;

  cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
  cout << "First, enter the degrees: ";
  cin >> degrees;  
  cout << "Next, enter the minutes: ";
  cin >> minutes;  
  cout << "Finally, enter the seconds: ";
  cin >> seconds;
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + (minutes / 60) + (seconds / (60 * 60)) << endl;

  //============================ Excercise 4 ===================================

  const int hours_per_day = 24;
  const int minutes_per_hour = 60;
  const int seconds_per_minutes = 60;
  int days, hours, minutes, seconds;
  long long init_seconds;

  cout << "Enter a seconds quantity: ";
  cin >> init_seconds;
  
  days = init_seconds / (hours_per_day * minutes_per_hour * seconds_per_minutes);
  hours = (init_seconds % (hours_per_day * minutes_per_hour * seconds_per_minutes)) / (seconds_per_minutes * minutes_per_hour);
  minutes = ((init_seconds % (hours_per_day * minutes_per_hour * seconds_per_minutes)) % (seconds_per_minutes * minutes_per_hour)) / (seconds_per_minutes);
  seconds = init_seconds % seconds_per_minutes;

  cout << init_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";  

  //============================ Excercise 5 ===================================

  long long all_population, usa_population;

  cout << "Enter a Earth population: ";
  cin >> all_population;
  cout << "Enter a USA population: ";
  cin >> usa_population;
  cout << "Percents of USA population is: " << (double(usa_population) / double(all_population)) * 100.0 << "%";

  //============================ Excercise 6 ===================================

  double miles, galones;

  cout << "Enter covered distance (miles): ";
  cin >> miles;
  cout << "Enter consumed oil (galons): ";
  cin >> galones;
  cout << "Your fuel consumption = " << miles / galones << " MPG";

  //============================ Excercise 6 ===================================

  const double litres_per_galon = 3.78541178;
  const double kilometers_per_mile = 1.609344;
  double mpg, liters, kilometers, result;

  cout << "Enter MPG fuel consumption: ";
  cin >> mpg;

  kilometers = mpg * kilometers_per_mile;
  liters = litres_per_galon / kilometers;
  result = liters * 100;

  cout << "LPK fuel consumption = " << result << " l/100km";
}

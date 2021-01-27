#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string characterName = "John";
  int characterAge = 35;
  cout << "Hello " << characterName << endl;
  cout << characterName << " has age " << characterAge << endl;
  char grade = 'A';
  string name = "Rachit";
  int intObject = 5;
  float floatObject = 4.000;
  double doubleObject = -2.3;
  bool isMale = true;
  cout << name.length() << endl;
  cout << name[2] << endl;
  cout << name.find('o') << endl;
  cout << intObject + doubleObject << endl;
  cout << pow(2, 5) << endl;
  cout << sqrt(2) << endl;
  cout << round(2.5) << endl;
  cout << floor(2.5) << endl;
  cout << ceil(2.5) << endl;
  cout << fmax(2, 5) << endl;
  cout << fmin(2, 5) << endl;
  cout << "Enter your age: ";
  cin >> characterAge;
  return 0;
}

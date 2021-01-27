#include <iostream>
#include <cmath>

using namespace std;

double cube(double num)
{
  return num * num * num;
  cout << "Hello" << endl;
}

int main()
{
  int num = 0;
  cout << "Enter the number: ";
  cin >> num;
  cout << cube(num) << endl;
  return 0;
}

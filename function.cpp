#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name)
{
	cout << "Hello " << name << endl;
}

int main()
{
	cout << "Top" << endl;
	sayHi("Mike");
	cout << "Bottom" << endl;
	return 0;
}

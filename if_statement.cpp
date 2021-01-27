#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool isMale = false;
	bool isTall = true;
	if (isMale && isTall)
	{
		cout << "You are tall and male" << endl;
	}
	else if (isMale && !isTall)
	{
		cout << "You are male and not tall" << endl;
	}
	else if (!isMale && isTall)
	{
		cout << "You are not male but tall" << endl;
	}
	else
	{
		cout << "You are neither tall nor male" << endl;
	}
	return 0;
}

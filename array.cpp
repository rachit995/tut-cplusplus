#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "We are studying arrays" << endl;
	int luckyNums[20] = {4, 8, 15, 16, 23, 42};
	luckyNums[10] = 100;
	cout << luckyNums[10] << endl;
	return 0;
}

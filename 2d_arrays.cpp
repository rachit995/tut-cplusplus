#include <iostream>

using namespace std;

int main()
{
	int iSize = 2;
	int jSize = 2;
	int numberGrid[2][2] = {
			{2, 3},
			{4, 5}};
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			cout << numberGrid[i][j] << endl;
		}
	}
	return 0;
}

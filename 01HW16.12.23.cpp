#include <iostream>
using namespace std;
int main()
{
	// первый способ задать двумерный массив
	int array[2][2] = {1,2,3,4};
	// первый способ вывести на экран
	cout << array[0][0] << array[0][1] << array[1][0] << array[1][1] << endl;
	// второй способ вывести на экран
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cout << array[i][j] << " ";
	cout << endl;
	// второй способ задать двумерный массив
	int a[2][2] = 
	{
		{1,2},
		{1,2}
	};
	cout << a[0][0] << a[0][1] << a[1][0] << a[1][1] << endl;
	return 0;
}

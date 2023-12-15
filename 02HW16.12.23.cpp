#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "введите элементы массива" << endl;
	int array[2][2] = {};
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cin >> array[i][j];
	cout << "массив после заполнения" << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cout << array[i][j] << " ";
	cout << endl;
	int sum1 = array[0][0] + array[0][1];
	int sum2 = array[0][0] + array[1][0];
	int sum3 = array[1][0] + array[0][0];
	int sum4 = array[1][0] + array[1][1];
	cout << "сумма по столбцам и строкам" << endl;
	cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4;
	return 0;
}

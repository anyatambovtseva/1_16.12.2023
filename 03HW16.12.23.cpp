#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int start = 10, end = 100;
	int array[2][2] = {};
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			array[i][j] = rand() % (end - start + 1) + start;
	cout << "������ ����� ����������" << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cout << array[i][j] << " ";
	cout << endl;
	int sum1 = array[0][0] + array[0][1];
	int sum2 = array[1][0] + array[1][1];
	if (sum1 > sum2)
		cout << "����� ��������� ����������� � ������ ������";
	if (sum1 < sum2)
		cout << "����� ��������� ����������� �� ������ ������";
	if (sum1 == sum2)
		cout << "����� ��������� � ������� ������� �����";
	return 0;
}
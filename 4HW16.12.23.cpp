#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    char str[51];
    cout << "������� ������: ";
    cin.getline(str, 50);

    int count[10] = { 0 };

    char* ptr = str;
    while (*ptr) 
    {
        if (isdigit(*ptr)) 
        {
            count[*ptr - '0']++;
        }
        ptr++;
    }

    int maxCount = 0;
    int maxDigit = -1;
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    if (maxDigit == -1) 
    {
        cout << "� ������ ��� ����." << endl;
    }
    else 
    {
        cout << "����� ����� ����������� ����� � ������: " << maxDigit << endl;
    }
    return 0;
}
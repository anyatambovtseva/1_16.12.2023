#include <iostream>
using namespace std;

void invertArray(int* array, int n) 
{
    int* start = array;
    int* end = array + n - 1;

    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    int* array = new int[n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> *(array + i);
    }

    invertArray(array, n);
    cout << "Инвертированный массив:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << *(array + i) << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

void sumArrays(int* a1, int* a2, int* a3, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        *(a3 + i) = *(a1 + i) + *(a2 + (n - 1 - i));
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива n = ";
    cin >> n;
    int* a1 = new int[n];
    int* a2 = new int[n];
    int* a3 = new int[n];
    cout << "Введите элементы первого массива: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> *(a1 + i);
    }
    cout << "Введите элементы второго массива: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> *(a2 + i);
    }
    sumArrays(a1, a2, a3, n);
    cout << "Массив суммы элементов: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << *(a3 + i) << endl;
    }
    return 0;
}

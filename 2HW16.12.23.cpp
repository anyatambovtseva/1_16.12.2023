#include <iostream>
using namespace std;

void Arrays(int* a1, int n)
{
    int k = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(*(a1 + i)!=*(a1+n-1))
        k++;
    }
    cout << "Элементов массива отличных от последнего элемента: " << k;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива n = ";
    cin >> n;
    int* a1 = new int[n];
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(a1 + i);
    }
    Arrays(a1, n);

    return 0;
}

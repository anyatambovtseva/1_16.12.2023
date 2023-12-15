#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int arr[10];
    srand(time(0));

    int* ptr = arr;
    for (int i = 0; i < 10; i++) 
    {
        *ptr = rand() % 101 - 50;
        ptr++;
    }

    ptr = arr;
    for (int i = 0; i < 10; i++) 
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    int min = *arr;
    ptr = arr + 1;
    for (int i = 1; i < 10; i++) 
    {
        if (*ptr < min) 
        {
            min = *ptr;
        }
        ptr++;
    }

    cout << "Минимальный элемент массива = : " << min << endl;
    return 0;
}
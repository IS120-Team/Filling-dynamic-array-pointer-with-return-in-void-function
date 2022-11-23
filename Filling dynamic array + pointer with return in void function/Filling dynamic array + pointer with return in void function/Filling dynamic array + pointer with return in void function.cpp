#include <iostream>
using namespace std;

int* fillingArray(int raws)
{
    int* arr = new int[raws];
    for (int i = 0; i < raws; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

void showArray(int* arr, int raws)
{
    for (int i = 0; i < raws; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int raws = 0;


    cout << "Введите кол-во символов в массиве: ";
    cin >> raws;
    cout << "Вводите числа, которые будет заполнять ваш массив" << endl;
    int* pointerArray = fillingArray(raws);

    cout << "В вашем массиве сейчас содержаться: ";
    showArray(pointerArray, raws);
}
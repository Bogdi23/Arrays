#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#define ARRAYS

int main() {

    setlocale(LC_ALL, "");

    const int SIZE = 100; // Максимальный размер массива
    int arr[SIZE];
    int n;

    cout << "Введите количество элементов массива: "; cin >> n;

    // Ввод элементов массива
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Вывод в прямом порядке
    cout << "Массив в прямом порядке: \n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    // Вывод в обратном порядке
    cout << "Массив в обратном порядке: \n";
    for (int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Вычисление суммы и среднего
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
 
    cout << "Сумма элементов массива: \n" << sum << endl;
    cout << "Среднее-арифметическое элементов массива: \n" << (double) sum / n << endl;

    // Поиск минимального и максимального
    int min, max;
    min = max = arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Минимальное значение в массиве: " << min << endl;
    cout << "Максимальное значение в массиве: " << max << endl;

}

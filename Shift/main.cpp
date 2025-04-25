#include <Windows.h>
#include <iostream>
using namespace std;

#define SHIFT
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

#ifdef SHIFT
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int Number_of_Shifts;
	cout << "Введите количество сдвигов влево: "; cin >> Number_of_Shifts;
	// Цыкличнеский сдвиг массива:
	for (int i = 0; i < Number_of_Shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		Sleep(100);
		system("CLS");
		// Вывод сдвинутого массива:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}

	int Number_of_Shifts_r;
	cout << "Введите количество сдвигов вправо: "; cin >> Number_of_Shifts_r;
	// Цыклический сдвиг массива:
	for (int i = 0; i < Number_of_Shifts_r; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
		// Вывод сдвинутого массива:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
#endif // SHIFT

}
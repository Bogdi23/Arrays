#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#define ARRAYS

int main() {

    setlocale(LC_ALL, "");

    const int SIZE = 100; // ������������ ������ �������
    int arr[SIZE];
    int n;

    cout << "������� ���������� ��������� �������: "; cin >> n;

    // ���� ��������� �������
    cout << "������� �������� �������: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // ����� � ������ �������
    cout << "������ � ������ �������: \n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    // ����� � �������� �������
    cout << "������ � �������� �������: \n";
    for (int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // ���������� ����� � ��������
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
 
    cout << "����� ��������� �������: \n" << sum << endl;
    cout << "�������-�������������� ��������� �������: \n" << (double) sum / n << endl;

    // ����� ������������ � �������������
    int min, max;
    min = max = arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "����������� �������� � �������: " << min << endl;
    cout << "������������ �������� � �������: " << max << endl;

}

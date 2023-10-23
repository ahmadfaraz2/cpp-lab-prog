#include <iostream>

using namespace std;

int main()
{
    int arr_size, arr[100], j, i, temp;

    cout << "Enter Array size: ";
    cin >> arr_size;

    cout << "Enter Array Elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "\t";
    }

    j = i - 1; // j points to the last element and i points to the first element.
    i = 0;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "\nReverse Array Elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
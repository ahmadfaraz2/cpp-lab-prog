#include <iostream>

using namespace std;

int main()
{
    int arr_size, arr[100], large;

    cout << "Enter Array Size(Max 100): ";
    cin >> arr_size;

    cout << "Enter Array Elements: \n";
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    cout << "Searching for largest number....\n";

    large = arr[0]; // assigning large to first element of array.
    for (int i = 0; i < arr_size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }

    cout << "Largest Number: " << large;

    return 0;
}
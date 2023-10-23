#include <iostream>

using namespace std;

int main()
{
    int arr[10], arr_size, s_ele, pos, cnt = 0;

    cout << "Enter Array size: ";
    cin >> arr_size;

    cout << "Enter Array Elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << " ";
        cin >> arr[i];
    }

    cout << "Enter Element to be searched: ";
    cin >> s_ele;

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == s_ele)
        {
            cnt = 1;
            pos = i + 1;
            break;
        }
    }

    if (cnt == 0)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "Element " << s_ele << " found at position " << pos;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 7, 2, 18, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;
    h

        return 0;
}
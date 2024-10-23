#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) // for passes (4)
    {
        for (int j = 0; j < size - i - 1; j++) // i-1 bacause every time last element not need to traverse
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / 4;  //sizeof(arr[0])

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    BubbleSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
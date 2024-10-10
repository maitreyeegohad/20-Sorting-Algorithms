//bubble sort
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline for better output formatting

    return 0;
}

/*
OUTPUT: 
The sorted array is: 12 23 56 78 144 

  */

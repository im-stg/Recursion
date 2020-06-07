#include <iostream>
using namespace std;

void merge2Sorted(int *input, int s, int m, int e)
{
    cout<<"s"<<" "<<s<<" "<<"m"<<" "<<m<<" "<<"e"<<" "<<e<<endl;
    int sorted[e + 1 - s];

    int i = s, j = m + 1, k = 0;
    while (i <= m && j <= e)
    {
        if (input[i] < input[j])
        {
            sorted[k] = input[i];
            i++;
            k++;
        }
        else
        {
            sorted[k] = input[j];
            j++;
            k++;
        }
    }

    while (i <= m)
    {
        sorted[k] = input[i];
        i++;
        k++;
    }

    while (j <= e)
    {
        sorted[k] = input[j];
        j++;
        k++;
    }

    for (int c = 0; c < sizeof(sorted) / sizeof(sorted[0]); c++)
    {
        input[s++] = sorted[c];
    }
    return;

    // s 0 m 0 e 1
    // s 0 m 1 e 2
    // s 3 m 3 e 4
    // s 0 m 2 e 4
    // s 5 m 5 e 6
    // s 7 m 7 e 8
    // s 5 m 6 e 8
}

void mergeSortArray(int *input, int s, int e)
{
    if (s > e || s == e)
        return;

    int mid = (e + s) / 2;
    mergeSortArray(input, s, mid);
    mergeSortArray(input, mid + 1, e);
    // merge(inut, s, m, e);
    merge2Sorted(input, s, mid, e);
}

void mergeSort(int input[], int size)
{
    // Write your code here
    mergeSortArray(input, 0, size - 1);
}

int main()
{
    int arr[] = {2, 7, 5, 9, 3, 5, 6, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, size);
    for (int c = 0; c < sizeof(arr) / sizeof(arr[0]); c++)
    {
        cout << arr[c] << " ";
    }
}

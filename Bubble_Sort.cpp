#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    cout << "How many elements would you like to enter: ";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the elements number " << i + 1 << ": ";
        cin >> a[i];
    }

    Bubble_Sort(a, n);

    cout << "Sorted list is as follows:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

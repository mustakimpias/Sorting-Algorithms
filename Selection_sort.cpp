#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, temp, index_min, a[30];
    cout << "Enter the number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ":";
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[index_min])
            {
                index_min = j;
            }
        }
        if (index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }
    cout << "\nSorted list is as follows\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

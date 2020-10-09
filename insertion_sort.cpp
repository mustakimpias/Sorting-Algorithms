#include<bits/stdc++.h>
using namespace std;

void Insertion_sort(int a[], int n)
{
    int i, j, item;

    for(i=1; i<n; i++)
    {
        item = a[i];
        j = i-1;

        while(j>=0 && a[j]>item)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = item;
    }
}

int main()
{
    int n, i;
    cout << "How many elements would you like to enter: ";
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cout << "Enter the elements number " << i+1 << ": ";
        cin >> a[i];
    }

    Insertion_sort(a,n);

    cout << "Sorted list is as follows:" << endl;
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

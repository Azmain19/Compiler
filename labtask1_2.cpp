#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;

    cout << "Enter the size of the array : ";
    cin >> n;
    cout<<endl;


    for (i = 0; i < n; i++) {
        cout << i + 1 << ". Enter element : ";
        cin >> arr[i];
    }

    cout <<endl;


    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }


    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Max : " << max <<endl;
    cout << "Min : " << min;
    cout<<endl;

    return 0;
}

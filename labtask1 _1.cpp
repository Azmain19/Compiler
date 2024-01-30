#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float arr[10], sum=0.0, avg;

    cout << "Enter the num of array : ";
    cin >> n;


    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter element : ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout<<endl;

    avg = sum / n;
    cout << "Average = " << avg;
    cout<<endl;

    return 0;
}

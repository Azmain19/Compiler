
#include <iostream>
using namespace std;
int main()
{
    int n, f = ;
    cout << "Enter number: " ;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        f*= i;
    }
    cout << "Factorial of " << n << " is " << f << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        do
        {
            cout << k;
            if (k != i + 1)
            {
                cout << " * ";
            }
            k++;
        } while (k <= i + 1);
        cout << "\n";
    }
    for (int i = n - 1; i > 0; i--)
    {
        int k = 1;
        do
        {
            cout << k;
            if (k != i)
            {
                cout << " * ";
            }
            k++;
        } while (k <= i);
        cout << "\n";
    }
    return 0;
}
// 1
// 1*2
// 1*2*3
// 1*2*3*4
// 1*2*3
// 1*2
// 1
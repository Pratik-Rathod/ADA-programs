#include <iostream>
using namespace std;

int main()
{

#ifndef OULINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b[23];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i];
    }
    cout << "Hell world " << a + b[1] << endl;
    return 0;
}
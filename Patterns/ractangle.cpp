//Print a rectangle pattern
#include <iostream>
using namespace std;
int main()
{

#ifndef GET_INPUT
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

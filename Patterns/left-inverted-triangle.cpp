//print left inverted triangle
#include <iostream>
int main()
{
#ifndef GET_INPUT
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    std::cin >> a;
    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}
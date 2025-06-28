#include <iostream>
using namespace std;

int f(int n, int m, int o)
{
    if (n > m)
    {
        if (n > o)
            return n;
    }
    else if (m > n)
    {
        if (m > o)
            return m;
    }
    else if (o > n)
    {
        if (o > m)
            return o;
    }
    return 0;
}

int main()
{
    int n, m, o;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter second num:  ";
    cin >> m;
    cout << "Enter third num: ";
    cin >> o;
    cout << f(n, m, o);

    return 0;
}
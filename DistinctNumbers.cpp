#include<iostream>

using namespace std;

int main()
{
    int n, tmp = -10;
    while (n > 0)
    {
        cin >> n;
        if (tmp == n) continue;
        tmp = n;
        cout << tmp << " ";
        if (n < 0) return 0;
    }
    return 0;
}
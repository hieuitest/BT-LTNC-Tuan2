#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 2*n ;
    for (int i = 0 ; i < d  ; i+=2)
    {
        for (int j = n -1 ; j >= 0 ; j-- )
        {
            cout << " ";
        }
        n--;
        for (int k = 0 ; k <= i ; k++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <cstdlib>

using namespace std;

int nwd(int a, int b)
{
    int dzielnik = 0;
    for (int i = 1; i < 1000000; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            dzielnik = i;
        }
    }
    
    return dzielnik;
}

int main()
{
    int a11, b11;
    
    cout << "Podaj dwie liczby: \n";
    cin >> a11;
    cin >> b11;

    cout << nwd(a11, b11);
}
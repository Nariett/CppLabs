#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double S, Y, r, x, a, b, h, n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (b < a)
    {
        cout << "Input error b" << endl;
        system("pause");
        return 0;
    }
    cout << "Enter h: ";
    cin >> h;
    if (h >= (b - a))
    {
        cout << "Input error h" << endl;
        system("pause");
        return 0;
    }
    cout << "Enter n: ";
    cin >> n;
    if ((n <= 0) || (n - int(n) != 0))
    {
        cout << "n - must be a positive integer" << endl;
        system("pause");
        return 0;
    }
    cout << "|\tx\t|\tS(x)\t|\tY(x)\t|\tY(x) - S(x)\t|\n";
    for (x = a; x <= b; x += h)
    {
        for (int k = 0; k < n; k++)
        {
            S = pow(x, 2 * k) / (2 * k);
        }
        Y = (exp(x) + exp(-x)) / 2.0;
        r = fabs(Y - S);
        cout << "|\t" << x << "\t|\t" << S << "\t|\t" << Y << "\t|\t" << r << "\t\t|" << endl;
    }
    system("pause");
    return 0;

}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, h, n, r, s, y;
    a = 0.1;
    b = 1.0;
    n = 100;
    h = (b - a) / n;
    cout << "|\tx\t|\tY(x)\t|\tS(x)\t|\n";
    for (double x = a; x <= b; x += h)
    {
        r = 1.0;
        s = 1.0;
        y = exp(2 * x);
        for (int i = 1; i < n; i++)
        {
            r *= (2 * x) / i;
            s += r;
        }
        cout << "|\t" << x << "\t|\t" << y << "\t|\t" << s << "\t|" << endl;
    }
    system("pause");
    return 0;
}
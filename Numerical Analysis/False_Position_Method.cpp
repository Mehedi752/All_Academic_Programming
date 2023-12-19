// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

double error_find(double c_experimental, double c_actual)
{
    return abs(c_experimental - c_actual) / c_actual;
}

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double false_position(double a, double b, double ea)
{
    double error_tm = 1, c = b, c_experimental;
    while (error_tm > ea)
    {
        c_experimental = c;
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(c) == 0)
            break;
        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;

        error_tm = error_find(c_experimental, c);
    }
    return c;
}

int main()
{

    double a, b, ea = 0.0000000000001;
    cin >> a >> b;
    double root = false_position(a, b, ea);
    cout << root << endl;
}

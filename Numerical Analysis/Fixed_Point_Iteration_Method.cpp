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

double g(double x)
{
    return (cos(x) + 1) / 3;
}

double Fixed_Point(double x, double ea)
{
    double error_tm = 1, c_experimental, c;
    while (error_tm > ea)
    {
        c_experimental = x;
        c = g(x);
        if (f(c) == 0)
            break;
        error_tm = error_find(c_experimental, c);
        x = c;
    }
    return c;
}

int main()
{

    // Initial guess for Trigonometry, Log, Exponentiation a = 3.2, Otherwise a = 0.5.
    double x = 3.2, ea = 0.0000000000001;
    double root = Fixed_Point(x, ea);
    cout << root << endl;
}

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

double df(double x) // First Derivative of f(x).
{
    return 3 + sin(x);
}

double dff(double x) // Second Derivative of f(x).
{
    return cos(x);
}

double Harlie(double x, double ea)
{
    double error_tm = 1, c_experimental, c;
    while (error_tm > ea)
    {
        c_experimental = x;
        c = c_experimental - (2 * (f(x) * df(x)) / (2 * (df(x) * df(x)) - 2 * (f(x) * dff(x))));
        if (f(c) == 0)
            break;
        error_tm = error_find(c_experimental, c);
        x = c;
    }
    return c;
}

int main()
{
    double a, b, ea = 0.0000000000001;
    cin >> a >> b;
    double x = a;
    double root = Harlie(x, ea);
    cout << root << endl;
}

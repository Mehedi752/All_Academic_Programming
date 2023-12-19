// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

double error_find(double x2, double x1)
{
    return abs(x2 - x1) / x2;
}

double f(double x)
{
    return x * x * x - 13 * x - 12;
}

double Muller(double x0, double x1, double x2, double ea)
{
    double error_tm = 1, x3, h0, h1, p0, p1, a, b, c, det;
    while (error_tm > ea)
    {
        h0 = x1 - x0;
        h1 = x2 - x1;
        p0 = (f(x1) - f(x0)) / (x1 - x0);
        p1 = (f(x2) - f(x1)) / (x2 - x1);

        // Find the value of coefficient a,b,c.
        a = (p1 - p0) / (h1 + h0);
        b = (a * h1) + p1;
        c = f(x2);

        // Find determinant of f(x).
        det = sqrt((b * b) - (4 * a * c));
        x3 = x2 - ((2 * c) / (max(b + det, b - det)));

        // Updating x0,x1,x2.
        x0 = x1;
        x1 = x2;
        x2 = x3;

        // Error find for the current root value.
        error_tm = error_find(x2, x1);
    }
    return x3;
}

int main()
{
    double x0, x1, x2, ea = 0.00000001;
    cin >> x0 >> x1 >> x2;
    double root = Muller(x0, x1, x2, ea);
    cout << root << endl;
}

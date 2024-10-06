#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
    double tp, tk, z;
    int n;
    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;
    cout << fixed;
    cout << "------------------" << endl;
    cout << "|" << setw(3) << "t" << "   |"
        << setw(5) << "z" << "    |" << endl;
    cout << "------------------" << endl;
    double dt = (tk - tp) / n;
    double t = tp;
    while (t <= tk)
    {
        z = s(2 * t + 1) - pow(s(2 * t - 1), 2) + sqrt(s(t));
        cout << "|" << setw(5) << setprecision(2) << t
            << " |" << setw(8) << setprecision(3) << z
            << " |" << endl;


        t += dt;
    }
    cout << "------------------" << endl;
    return 0;
}
double s(const double x)
{
    if (abs(x) >= 1)
        return (pow(cos(x), 2) + 1) / exp(x);
    else if (x == 0);
    
    else
    {
        double S = 0;
        int k = 0;
        double a = 1.0 / sin(2 * x);
        S = a;
        do
        {
            k++;
            double R = pow(2, 2 * k + 1) * pow(x, 2 * k + 1);
            a *= R;
            S += a;
        } while (k < 4);
        return S;
    }
}

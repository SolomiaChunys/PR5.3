#include <iostream>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
	double rp, rk, z;
	int n;

	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;

	double dr = (rk - rp) / n;

	double r = rp;

	while (r <= rk)
	{
		z = s(sqrt(r) + 1) - pow(s(sqrt(r) - 1), 2) + 1;
		cout << r << "     " << z << endl;
		r += dr;
	}
	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1)
		return ((1 + (x * x) + sqrt(abs(x))) / (pow(sin(2 * x * x), 2) + 1));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = x / i;
			a *= R;
			S += a;
		} while (i < 5);

		double s = 0;
		int k = 1;
		double à = 1;
		s = à;
		do
		{
			k++;
			double R1 = x / k;
			à *= R1;
			s += à;
		} while (k < 6);
		return (S + s);
	}
}
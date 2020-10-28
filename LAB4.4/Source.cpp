#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, y, r;
	cout << "r = "; cin >> r;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x < xk)
	{
		if (x <= -1 - r)
			y = (-x - 1 - r);
		else
			if (-1 - r < x && x <= -1)
				y = (sqrt(r * r - (x - 1) * (x - 1)));
			else
				if (-1 < x && x <= 1)
					y = r;
				else
					if (1 < x && x <= 2)
						y = (x + x * r - 1 - 4 * r) / 3;
					else
						if (x >= 2)
							y = -1;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;

	}cout << "---------------------------" << endl;
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double x = 0.15, y;
	cout << "|-------------------|\n|" << setw(6)
		<< "x" << setw(8) << "y" << setw(6) << "|" << endl 
		<< "|-------------------|\n";
	while (x <= 2.1)
	{
		y = x - 3 * pow(cos(1.04 * x), 2);
		cout << "|" << setprecision(4) << setw(8) << x
			<< setprecision(4) << setw(8) << y << setw(4) << "|" << endl;
		x += 0.15;
	}
	cout << "|-------------------|\n";
	return 0;
}

using namespace std;
#include<iostream>
#include<cmath>
#include<iomanip>



double arctanx(double x)
{
	double sum = 0;
	int i = 1;
	int j = 1;
	while (1)
	{
		sum += pow(x, i) / j;
		if (pow(x, i) / j < pow(10, -6))
			break;
		i += 2;
		j += 2;
		j = -j;
	}
	return sum;
}

int main()
{
	double d = 1 / 2.0;
	d = -d;
	double n = pow(3,d);
	double pi = 6 * arctanx(n);
	cout <<setprecision(10)<< pi << endl;


}
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int fact (int u)
{
	int pro=1;
	while (u > 0)
	{
		pro = pro*u;
		u = u - 1;
	}
	return pro;
}

int main()
{
	int n, k;
	cin >> n >> k;
	float C;
	C = fact(n) / (fact(k)*fact(n - k));
	//cout.precision(2);
	cout << setiosflags(ios:: fixed) << setprecision(2)<< C;
	return 0;
}

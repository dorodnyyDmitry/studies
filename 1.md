# studies
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
	int a, aLast=-1;
	int count=0;
	int number1=-10, number2=-10;
	
	while (a!=-1)
	{
		cin >>a;
		
		if (a==-1)
			break;
			
		count++;
		
		if (a%3==0)
		{
			if(a==aLast)
			{
				number2 = count;
				number1 = count-1;
			}
		}
		aLast=a;
	}
	if (number1!=-10 && number2!=-10)
	{
		cout << "YES"<< endl;
		cout << number1 << ' ' << number2;
	}
	else cout << "NO";
	return 0;
}

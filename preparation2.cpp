#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string s;
	string g; //вспомогательная строка для потоков
	getline(cin, s);
	while (s.find("  ") != -1) //удаление лишних пробелов
	{
		s.erase(s.find("  "), 1);
	}
	if (s[0] == ' ') //удаление первого пробела
		s.erase(0, 1);
	if (s[s.size() - 1] == ' ') //удаление последнего пробела
		s.erase(s.size() - 1, 1);
	//cout << s;

	istringstream Potochek(s);
	istringstream quantity(s);

	int wordQuantity = 0;
	int lastWordLength = 999999999;
	int proof=0;

	while(quantity >> g)
	{
		wordQuantity++;
	}

	if (wordQuantity == 1 || wordQuantity == 0)
		cout << "ERROR";
	else {
		while (Potochek >> g)
		{
			if (g.size() < lastWordLength)
				proof++;
			lastWordLength = g.size();
		}

		if (proof == wordQuantity)
			cout << "YES";
		else cout << "NO";
	}
	return 0;
}

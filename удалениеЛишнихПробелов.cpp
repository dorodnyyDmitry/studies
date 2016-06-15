#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	while (s.find("  ") != -1) //удаление лишних пробелов
	{
		s.erase(s.find("  "), 1);
	}
	if (s[0] == ' ') //удаление первого пробела
		s.erase(0, 1);
	if (s[s.size() - 1] == ' ') //удаление последнего пробела
		s.erase(s.size() - 1, 1);
	cout << s;
	return 0;
}

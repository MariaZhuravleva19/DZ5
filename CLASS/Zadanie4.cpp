#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	int x1, x2, y1, y2;

	cin >> x1 >> x2 >> y1 >> y2;

	if (((y2 <= x1) && (y1 <= x2)) || ((x1 <= y2) && (x2 <= y1)))
	{
		cout << "NONE";
	}
	else
	{
		if (x1 < y1)
		{
			x1 = y1;
		}
		if (x2 > y2)
		{
			x2 = y2;
		}
		cout << x1 << " " << x2 << endl;
	}

	return 0;
}
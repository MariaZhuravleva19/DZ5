#include<iostream>
#include<string>
#include<fstream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	const int size = 2;
	int x1[size], x2[size], x3[size], x4[size];

	for (int i = 0; i < size; i++)
	{
		cin >> x1[i];
	}
	for (int i = 0; i < size; i++)
	{
		cin >> x2[i];
	}
	for (int i = 0; i < size; i++)
	{
		cin >> x3[i];
	}


	double s1, s2, s3;
	int c = 0;
	int a = 0;

	s1 = sqrt((pow(x2[0] - x1[0], 2) + pow(x2[1] - x1[1], 2))); //между 1 и 2
	s2 = sqrt((pow(x3[0] - x1[0], 2) + pow(x3[1] - x1[1], 2))); //между 1 и 3
	s3 = sqrt((pow(x3[0] - x2[0], 2) + pow(x3[1] - x2[1], 2))); //между 2 и 3

	if (s1 == s2)
	{
		c += 1;
		a = s1; // находим сторону 
	}
	if (s1 == s3)
	{
		c += 1;
		a = s1;
	}
	if (s2 == s3)
	{
		c += 1;
		a = s2;
	}

	if ((s1 == a * sqrt(2)) || (s2 == a * sqrt(2)) || (s3 == a * sqrt(2)))
	{
		c += 1;
	}

	if (c == 2)
	{
		if (x1[0] == x2[0])
		{
			x4[0] = x3[0];
		}
		if (x1[1] == x2[1])
		{
			x4[1] = x3[1];
		}
		if (x2[0] == x3[0])
		{
			x4[0] = x1[0];
		}
		if (x2[1] == x3[1])
		{
			x4[1] = x1[1];
		}
		if (x3[0] == x1[0])
		{
			x4[0] = x2[0];
		}
		if (x3[1] == x1[1])
		{
			x4[1] = x2[1];
		}
		cout << "Является квадратом" << endl;
		cout << x4[0] << " " << x4[1] << endl;
	}
	else
	{
		cout << "Не является квадратом" << endl;
	}
}
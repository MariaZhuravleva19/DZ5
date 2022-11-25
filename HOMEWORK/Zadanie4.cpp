#include <iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;


int main()
{
	int n, m;
	int c = 0;
	ifstream file1;
	file1.open("zadanie4(input).txt");

	file1 >> n;
	file1 >> m;

	int* cmax = new int[n];
	int* rmin = new int[m];

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			file1 >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			file1 >> a[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		rmin[i] = a[i][0];
		for (int j = 1; j < m; ++j)
		{
			if (a[i][j] < rmin[i])
			{
				rmin[i] = a[i][j];
			}
		}
	}
	for (int j = 0; j < m; ++j)
	{
		cmax[j] = a[0][j];
		for (int i = 1; i < n; ++i)
		{
			if (a[i][j] > cmax[j])
			{
				cmax[j] = a[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (rmin[i] == a[i][j] && cmax[j] == a[i][j])
			{
				c += 1;
			}
		}

	}
	ofstream file2;
	file2.open("zadanie4(output).txt");
	file2 << c;

	file1.close();
	file2.close();

}
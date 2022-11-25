#include <iostream>
#include<fstream>



using namespace std;

int main()
{
	ifstream file1;
	file1.open("zadanie8(input).txt");
	int k, n;

	int summ = 0;
	file1 >> n;
	file1 >> k;

	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		file1 >> a[i];

	}

	int c = 0;
	for (int i = 0; i != (n / k) + (n % k); i++)
	{
		for (int j = 1; j < k + 1; j++)
		{

			c++;
			if (c > n)
				break;
			else
				summ += a[i * k + (j - 1)] * (i + 1);


		}

	}

	ofstream file2;
	file2.open("zadanie8(output).txt");
	file2 << summ;

	delete[] a;
	file1.close();
	file2.close();

}
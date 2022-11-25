#include <iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;


int main()
{
	ifstream file1;
	file1.open("zadanie10(input).txt");
	int k, n, summ, newsumm = 0;

	string s;
	file1 >> n;
	file1 >> k;

	summ = n + k;

	s = to_string(summ);

	for (int i = 0; i < s.length(); i++)
	{
		newsumm += (s[s.length() - i - 1] - 48) * pow(3, i);
	}

	ofstream file2;
	file2.open("zadanie10(output).txt");
	file2 << newsumm << endl;



	file1.close();
	file2.close();

}
#include<iostream>
#include<string>
#include<fstream>
#include <cmath>

using namespace std;

int main()
{
	string str;
	int ans;

	ifstream file1;
	file1.open("zadanie2(input).txt");
	file1 >> str;
	int n = stoi(str);

	ans = 3 * (2 * (n - 1));

	ofstream file2;
	file2.open("zadanie2(output).txt");
	file2 << ans;
	file1.close();
}
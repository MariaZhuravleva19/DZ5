#include <iostream>
#include<fstream>

using namespace std;



int main()
{
	char word[] = { "0123456789ABCDEFGHIJKLMNOPQ" };
	char let[] = { "abcdefghijklmnopqrstuvwxyz " };
	string s, ans;

	ifstream file1;
	file1.open("zadanie1(input).txt");

	file1 >> s;

	while (ans.size() <= s.size())
	{
		for (int i = 0; i < 27; i++)
		{
			int n = 0;
			for (int j = 0; j < 27; j++)
			{
				if (word[j] == s[i])
				{
					n = j;
					break;
				}
			}
			if (n - 2 - i > -1)
			{
				ans.push_back(let[n - 2 - i]);
			}
			else
			{
				ans.push_back(let[26 - i - 1 + n]);
			}
		}
	}
	ans.erase(ans.begin() + s.size(), ans.end());
	ofstream file2;
	file2.open("zadanie1(output).txt");
	file2 << ans;

	file1.close();
	file2.close();

}
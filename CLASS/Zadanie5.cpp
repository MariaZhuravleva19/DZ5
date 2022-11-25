#include <iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;


int main()
{

	double l, k, h, t1, t2;

	cout << "L= " << endl;
	cin >> l;
	cout << "K= " << endl;
	cin >> k;
	cout << "Í= " << endl;
	cin >> h;

	t1 = l / k * h;

	cout << t1 << endl;

	return 0;

}
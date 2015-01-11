#include <iostream>
#include <iomanip>

using namespace::std;

int main(){
	int c1, c2, c, h, m;
	float s;
	cin >> c1 >> c2;
	c = c2 - c1;
	h = c / (100 * 60 * 60);
	m = c % (100 * 60 * 60) / (100 * 60);
	s = c % (100 * 60 * 60) % (100 * 60)*1.0 / 100;
	cout.fill('0');
	cout.setf(ios::fixed);
	cout << setw(2) << h << ':' << setw(2) << m << ':' << setw(2) << setprecision(0) << s;
	return 0;
}
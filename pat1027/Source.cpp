#include <iostream>

using namespace::std;

int main(){
	int n, i, len, clen;
	char c;
	cin >> n >> c;
	for (i = 0; 2 * i*i + 4 * i + 1 <= n; i++);
	len = 2 * (i - 1) + 1;
	for (int j = i - 1; j >= 0; j--){
		for (int k = 0; k < (len - 2 * j - 1) / 2; k++)
			cout << ' ';
		for (int k = 0; k < 2 * j + 1; k++)
			cout << c;
		cout << endl;
	}
	for (int j = 1; j <= i - 1; j++){
		for (int k = 0; k < (len - 2 * j - 1) / 2; k++)
			cout << ' ';
		for (int k = 0; k < 2 * j + 1; k++)
			cout << c;
		cout << endl;
	}
	i--;
	int d = n - (2 * i*i + 4 * i + 1);
	cout << d;
	return 0;
}